#include "monty.h"
/**
 * monty_pall - Function prints the entire stack
 * @head: Top/head of the stack
 * @count: number of lines
 * Return: void
*/
void monty_pall(stack_t **head, unsigned int count)
{
	stack_t *i;
	(void)count;

	i = *head;
	if (i == NULL)
		return;
	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
	}
}
