#include "monty.h"
void pall(stack_t **stack, __attribute__((unused)) unsigned int count)
{
	stack_t *temp = NULL;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	temp = *stack;

	if (!temp)
		exit(EXIT_SUCCESS);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
