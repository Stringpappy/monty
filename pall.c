#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: pointer head
 * @counter: none
 * Return:void
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	if (he == NULL)
		return;
	while (he)
	{
		printf("%d\n", he->n);
		he = he->next;
	}
}
