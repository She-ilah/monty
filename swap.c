#include "monty.h"
/**
 * monty_swap - Function adds the top two elements of the stack.
 * @head: Top/head of the stack.
 * @count: The number of lines.
 * Return: void
*/
void monty_swap(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	hold = i->n;
	i->n = i->next->n;
	i->next->n = hold;
}
