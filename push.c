#include "monty.h"
/**
 * monty_push - Function adds a node to the top of stack
 * @head: Top/head of the stack.
 * @count: number of the lines.
 * Return: void
*/
void monty_push(stack_t **head, unsigned int count)
{
	int n, j = 0, fl = 0;

	if (varb.arg)
	{
		if (varb.arg[0] == '-')
			j++;
		for (; varb.arg[j] != '\0'; j++)
		{
			if (varb.arg[j] > 57 || varb.arg[j] < 48)
				fl = 1; }
		if (fl == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(varb.file);
			free(varb.info);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(varb.file);
		free(varb.info);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(varb.arg);
	if (varb.lifi == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
