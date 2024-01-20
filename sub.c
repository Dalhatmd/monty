#include "monty.h"
void sub(stack_t **stack, unsigned int count)
{
	stack_t *head;
	int sub;

	head = *stack;
	if (count_elem(head) < 2)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", count);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	sub = head->next->n - head->n;
	head->next->n = sub;
	head->next->prev = NULL;
	*stack = head->next;
	free(head);
}
