#include "monty.h"
void add(stack_t **stack, unsigned int count)
{
	stack_t *head;
	int sum = 0;

	head = *stack;

	if (count_elem(head) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		free(data.line);
		fclose(data.file);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	
	sum = head->n + head->next->n;
	head->next->n = sum;
	head->next->prev = NULL;
	*stack = head->next;
	free(head);
}
