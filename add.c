#include "monty.h"
/**
 * f_add - func that adds the top two elements of the stack.
 * @head: pointer
 * @counter: num of line
 * Return: void
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *he;
	bus_t bus;
	int length = 0;
        int aux;

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
