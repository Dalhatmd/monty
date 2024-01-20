#include "monty.h"
void swap(stack_t **stack, unsigned int count)
{
	stack_t *head;

	int temp, temp2;

	head = *stack;

	if (count_elem(*stack) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	temp = head->n;
	temp2 = head->next->n;
	head->next->n = temp;
	head->n = temp2;
}
int count_elem(stack_t *stack)
{
	int count = 0;

	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}
