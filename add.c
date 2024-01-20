#include "monty.h"
void add(stack_t **stack, unsigned int count)
{
	stack_t *head;
	int sum = 0;

	head = *stack;

	if (count_elem(head) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	
	sum = head->n + head->next->n;
	
	head->n = sum;
	head->next = head->next->next;
	head->next->prev = head;
}
