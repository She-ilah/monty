#include "monty.h"
/**
 * add_node - Function adds node to the top of stack
 * @head: top/head of stack.
 * @value: value added to head.
 * Return: void
*/
void add_node(stack_t **head, int value)
{

	stack_t *new_node, *hold;

	hold = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (hold)
		hold->prev = new_node;
	new_node->n = value;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
