#include "monty.h"
/**
 * monty_pstr - Function prints the stack from the top.
 * @head: Top/head of the stack.
 * @count: number of the lines
 * Return: void
*/
void monty_pstr(stack_t **head, unsigned int count)
{
	stack_t *i;
	(void)count;

	i = *head;
	while (i)
	{
		if (i->n > 127 || i->n <= 0)
		{
			break;
		}
		printf("%c", i->n);
		i = i->next;
	}
	printf("\n");
}
