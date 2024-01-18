#include "monty.h"
/**
 * pall - prints the elements of a stack
 *
 * @stack: input stack
 * @count: line number
 */
void pall(stack_t **stack, __attribute__((unused)) unsigned int count)
{
	stack_t *temp = NULL;

	temp = *stack;

	if (!temp)
		exit(EXIT_SUCCESS);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
