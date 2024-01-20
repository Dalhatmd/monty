#include "monty.h"
void pchar(stack_t **stack, unsigned int count)
{
	stack_t *head = *stack;

	if(!head)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", count);
		exit(EXIT_FAILURE);
	}
	if(head->n >= 65 && (head->n <= 90 || (head->n >= 97 && head->n <= 122)))
	{
		printf("%c\n", head->n);
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", count);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
}
