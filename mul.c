#include "monty.h"
void mul(stack_t **stack, unsigned int count)
{
	stack_t *head;
	int mul;

	head = *stack;
	if(count_elem(head) < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", count);
		free(data.line);
		fclose(data.file);
		_free(head);
		exit(EXIT_FAILURE);
	}

	mul = head->n * head->next->n;
	head->next->n = mul;
	head->next->prev = NULL;
	*stack = head->next;
	free(head);
}
