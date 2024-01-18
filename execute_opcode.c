#include "monty.h"
/**
 */
int execute(char *line, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *op_code;

	op_code = strtok(line, " \t\n");
/*	printf("%s\n", op_code);*/
	if (op_code && op_code[0] == '#')
		return (0);
	data.arg = strtok(NULL, " \t\n");
	while (instructions[i].opcode && op_code)
	{
		if (strcmp(op_code, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (op_code && instructions[i].opcode == NULL)
	{
		fprintf(stderr, "L%d unknown instruction %s\n", count, op_code);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	return (1);
}
