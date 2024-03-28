#include "monty.h"
/**
 * f_pstr - func that prints the string at the top
 * followed by a new
 * @head: pointer
 * @counter: num of line
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	while (he)
	{
		if (he->n > 127 || he->n <= 0)
		{
			break;
		}
		printf("%c", he->n);
		he = he->next;
	}
	printf("\n");
}
