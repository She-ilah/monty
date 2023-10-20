#include "monty.h"
/**
 * monty_add - Function adds two elements in the stack.
 * @head: Top/head of the stack.
 * @count: number of line.
 * Return: void
*/
void monty_add(stack_t **head, unsigned int count)
{
	stack_t *i;
	int len = 0, hold;

	i = *head;
	while (i)
	{
		i = i->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	hold = i->n + i->next->n;
	i->next->n = hold;
	*head = i->next;
	free(i);
}
