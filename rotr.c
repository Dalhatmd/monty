#include "monty.h"
void rotr(stack_t **stack, __attribute((unused))unsigned int count)
{
	stack_t *final = *stack;
	int n;

	while (final->next != NULL)
	{
		final = final->next;
	}
	n = final->n;

	final->n = n;

	final->prev->next = NULL;
	final->prev = NULL;
	final->next = *stack;
	(*stack)->prev = final;
	*stack = final;
}
