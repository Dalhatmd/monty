#include "monty.h"
void my_div(stack_t **stack, unsigned int count)
{
	int div;
	stack_t *head;

	head = *stack;

	if (count_elem(head) < 2)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", count);
		fclose(data.file);
		free(data.line);
		exit(EXIT_FAILURE);
	}
	if (head->n == 0 || head->next->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", count);
		fclose(data.file);
		free(data.line);
		exit(EXIT_FAILURE);
	}
	div = head->next->n / head->n;
	head->next->n = div;
	head->next->prev = NULL;
	*stack = head->next;
	free(head);
}
