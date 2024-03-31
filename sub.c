#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *dir;
	int put, node;

	dir = *head;
	for (node = 0; dir != NULL; node++)
		dir = dir->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	dir = *head;
	put = dir->next->n - dir->n;
	dir->next->n = put;
	*head = dir->next;
	free(dir);
}
