#include "monty.h"
void pstr(stack_t **stack, __attribute__((unused))unsigned int count)
{
	stack_t *head = *stack;

	while(head && head->n != 0)
	{
		if(head->n >= 65 && (head->n <= 90 || (head->n >= 97 && head->n <= 122)))
		{
			printf("%c", head->n);
		}
		head = head->next;
	}
	printf("\n");
}
