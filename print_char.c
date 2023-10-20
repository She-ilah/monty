#include "monty.h"
/**
 * monty_pchar - Function prints the top of the stack.
 * @head: Top/head of the stack.
 * @count: number of lines.
 * Return: void.
*/
void monty_pchar(stack_t **head, unsigned int count)
{
	stack_t *i;

	i = *head;
	if (!i)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (i->n > 127 || i->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", i->n);
}
