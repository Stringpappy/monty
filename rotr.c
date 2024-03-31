#include "monty.h"
/**
  *rotr_func - rotates the stack to the bottom
  *@head:pointer
  *@counter:  num of line
  *Return: void
 */
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *prot;

	prot = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (prot->next)
	{
		prot = prot->next;
	}
	prot->next = *head;
	prot->prev->next = NULL;
	prot->prev = NULL;
	(*head)->prev = prot;
	(*head) = prot;
}
