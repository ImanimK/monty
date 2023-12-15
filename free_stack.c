#include "monty.h"

/**
 * free_stack - Frees a doubly linked list
 * @head: Head pointer to the stack
 *
 * Return: Nothing
 */
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
 * f_stack - Prints the top
 * @head: Head of the stack
 * @counter: Line count
 *
 * Return: Nothing
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
