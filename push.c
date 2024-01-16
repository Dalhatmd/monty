#include "main.h"
void push(stack_t **stack, unsigned int line_no)
{
	stack_t new = NULL;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return;

