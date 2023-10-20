#include "monty.h"
/**
* free_stack - Function frees the doubly linked list.
* @head: Top/head of the stack
* Return: void
*/
void free_stack(stack_t *head)
{
	stack_t *hold;

	hold = head;
	while (head)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
