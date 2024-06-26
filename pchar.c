#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: pointer
 * @counter: num of line
 * Return:void
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *hw;

	hw = *head;
	if (!he)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (he->n > 127 || he->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", he->n);
}
