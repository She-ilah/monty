#include "monty.h"
/**
  *monty_sub- Function subtracts elements of the stack.
  *@head: Top/head of the stack.
  *@count: The number of lines.
  *Return: void.
 */
void monty_sub(stack_t **head, unsigned int count)
{
	stack_t *hold;
	int pto, nodes;

	hold = *head;
	for (nodes = 0; hold != NULL; nodes++)
		hold = hold->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hold = *head;
	pto = hold->next->n - hold->n;
	hold->next->n = pto;
	*head = hold->next;
	free(hold);
}
