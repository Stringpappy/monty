#include "monty.h"
/**
  *sub_func - that perform sustration
  *@head: pointer
  *@counter: num of line
  *Return:  void
 */
void sub_func(stack_t **head, unsigned int counter)
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
