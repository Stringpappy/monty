#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: head pointer
 * @counter: num of line
 * Return: void
*/
void swap_func(stack_t **head, unsigned int counter)
{
	stack_t *he;
	int length = 0,dir;

	he = *head;
	while (he)
	{
		he = he->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	dir = he->n;
	he->n = he->next->n;
	he->next->n = dir;
}
