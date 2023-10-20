#include "monty.h"
/**
  *monty_rotl- Function rotates the stack to the top.
  *@head: Top/head of the stack.
  *@count: number of the lines
  *Return: void.
 */
void monty_rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *temp = *head, *hold;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	hold = (*head)->next;
	hold->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = hold;
}
