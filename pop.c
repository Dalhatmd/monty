#include "monty.h"
/**
 * pop - removes an element from the top of the stack
 *
 * @stack: input stack
 * @count: line number
 */
void pop(stack_t **stack, unsigned int count)
{
	stack_t *temp = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d can't pop empty stack\n", count);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	*stack = (*stack)->next;

	free(temp);
}
