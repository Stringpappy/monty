#include "monty.h"
/**
 * f_queue - func that  prints the top
 * @head: pointer
 * @counter: num of line
 * Return: void
*/
void queue_func(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - func that add node to the tail stack
 * @n: int
 * @head: pointer to the head
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *mynode, *dir;

	dir = *head;
	mynode = malloc(sizeof(stack_t));
	if (mynode == NULL)
	{
		printf("Error\n");
	}
	mynode->n = n;
	mynode->next = NULL;
	if (dir)
	{
		while (dir->next)
			dir = dir->next;
	}
	if (!dir)
	{
		*head = mynode;
		mynode->prev = NULL;
	}
	else
	{
		dir->next = mynode;
		mynode->prev = dir;
	}
}
