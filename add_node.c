#include "monty.h"

/**
 * addnode - Adds a node to the head of the stack
 * @head: Head of the stack
 * @n: New value
 *
 * Return: Nothing
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}

