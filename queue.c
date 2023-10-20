#include "monty.h"

/**
 * pqueue - Function prints the top of the queue.
 * @head: top/head of the stack.
 * @count: number of lines.
 * Return: void
*/
void pqueue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	varb.lifi = 1;
}

/**
 * add_queue - Function adds node to the end of stack
 * @value: value/node to be added.
 * @head: Top/head of the stack
 * Return: void
*/
void add_queue(stack_t **head, int value)
{
	stack_t *new_node, *hold;

	hold = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = value;
	new_node->next = NULL;
	if (hold)
	{
		while (hold->next)
			hold = hold->next;
	}
	if (!hold)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		hold->next = new_node;
		new_node->prev = hold;
	}
}
