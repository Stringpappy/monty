#include "monty.h"
/**
 * f_mod - computes the division of element
 * @head:pointer
 * @counter: numb of line
 * Return: void
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	if (he->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	dir = he->next->n % he->n;
	he->next->n = dir;
	*head = he->next;
	free(he);
}
