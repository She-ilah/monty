#include "monty.h"
/**
  *monty_rotr- Function rotates the stack to the bottom.
  *@head: Top/head of stack.
  *@count: number of lines.
  *Return: void
 */
void monty_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *hold;

	hold = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (hold->next)
	{
		hold = hold->next;
	}
	hold->next = *head;
	hold->prev->next = NULL;
	hold->prev = NULL;
	(*head)->prev = hold;
	(*head) = hold;
}
