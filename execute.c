#include "monty.h"
/**
* execute - Function executes the written opcode.
* @stack: Stack
* @count: number of lines
* @file: poiner to monty file
* @content: content written on the lines.
* Return: void.
*/
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", monty_push}, {"pall", monty_pall}, {"pint", monty_pint},
				{"pop", monty_pop},
				{"swap", monty_swap},
				{"add", monty_add},
				{"nop", monty_nop},
				{"sub", monty_sub},
				{"div", monty_div},
				{"mul", monty_mul},
				{"mod", monty_mod},
				{"pchar", monty_pchar},
				{"pstr", monty_pstr},
				{"rotl", monty_rotl},
				{"rotr", monty_rotr},
				{"queue", pqueue},
				{"stack", monty_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	varb.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
