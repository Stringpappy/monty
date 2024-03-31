#include "monty.h"
/**
  *f_rotl- func that rotates the stack to the top
  *@head:pointer
  *@counter: num of line
  *Return: void
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *point = *head, *dir;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	dir = (*head)->next;
	dir->prev = NULL;
	while (point->next != NULL)
	{
		point = point->next;
	}
	point->next = *head;
	(*head)->next = NULL;
	(*head)->prev = point;
	(*head) = dir;
}
