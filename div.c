#include "monty.h"
/**
 * f_div -func that divides the top two elements of the stack.
 * @head: pointer
 * @counter: num of line
 * Return: void
*/
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, aux;

	he = *head;
	while (he)
	{
		he = h->next;
		lenght++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	aux = he->next->n / he->n;
	he->next->n = aux;
	*head = he->next;
	free(he);
}
