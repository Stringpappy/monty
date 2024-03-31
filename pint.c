#include "monty.h"
/**
 * pint_func - prints the top
 * @head: pointer
 * @counter: num of line
 * Return:void
*/
void pint_func(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
