#include "monty.h"
/**
 * monty_mod - Function calculates modulus of elements in stack.
 * @head: Top/head of the stack.
 * @count: number of lines.
 * Return: void
*/
void monty_mod(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	if (i->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hold = i->next->n % i->n;
	i->next->n = hold;
	*head = i->next;
	free(i);
}
