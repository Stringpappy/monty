#include "monty.h"
/**
 * mul_func  - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void mul_func(stack_t **head, unsigned int counter)
{
	stack_t *he;
	int length = 0, dir;

	he = *head;
	while (he)
	{
		he = he->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	dir = he->next->n * he->n;
	he->next->n = dir;
	*head = he->next;
	free(he);
}
