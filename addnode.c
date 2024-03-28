#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *mynode, *dir;

	dir = *head;
	mynode = malloc(sizeof(stack_t));
	if (mynode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (dir)
		dir->prev = mynode;
	mynode->n = n;
	mynode->next = *head;
	mynode->prev = NULL;
	*head = mynode;
}
