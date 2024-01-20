#include "monty.h"
/**
 * mod - computes the modulus of the top and second of the stack
 *
 * @stack: input stack
 * @count: line number
 */
void mod(stack_t **stack, unsigned int count)
{
	stack_t *head;
	int mod;

	head = *stack;
	if(count_elem(head) < 2)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", count);
		fclose(data.file);
		free(data.line);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	if (head->n == 0 || head->next->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", count);
		fclose(data.file);
		free(data.line);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	mod = head->n % head->next->n;
	head->next->n = mod;
	head->next->prev = NULL;
	*stack = head->next;
	free(head);
}
