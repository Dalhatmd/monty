#include "monty.h"
void pint(stack_t **stack, unsigned int count)
{
	stack_t *temp = NULL;

	temp = *stack;
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", count);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", temp->n);
}
