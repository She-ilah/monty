#include "monty.h"
/**
 * monty_pint - Function prints the top of the stack.
 * @head: Top/head of the stack.
 * @count: number of the lines.
 * Return: void.
*/
void monty_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
