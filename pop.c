#include "monty.h"
/**
 * monty_pop - Function prints the top of the stack.
 * @head: Top/head of the stack.
 * @count: number of lines.
 * Return: void
*/
void monty_pop(stack_t **head, unsigned int count)
{
	stack_t *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->next;
	free(i);
}
