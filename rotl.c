#include "monty.h"
void rotl(stack_t **stack, __attribute__((unused))unsigned int count)
{
	stack_t *head = *stack;
	int n = head->n;
	if (*stack == NULL || (*stack)->next == NULL)
	{
        return;
	}
	*stack = head->next;
	while (head->next != NULL)
	{
		head = head->next;
	}
	head->n = n;
	(*stack)->prev = NULL;
}
