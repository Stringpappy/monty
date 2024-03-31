#include "monty.h"
/**
 * add_fun - func that adds the top two elements of the stack.
 * @head: pointer
 * @counter: num of line
 * Return: void
*/
void add_fun(stack_t **head, unsigned int counter)
{
	stack_t *he;
	int length = 0, aux;

	he = *head;
	while (he)
	{
		he = he->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	aux = he->n + he->next->n;
	he->next->n = aux;
	*head = he->next;
	free(he);
}
