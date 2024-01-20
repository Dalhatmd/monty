#include "monty.h"
/**
 * push - adds an element to the top of the stack
 *
 * @head: input stack
 * @count: line number
 */
void push(stack_t **head, unsigned int count)
{
	int n;

	if (data.arg != NULL && !is_integer(data.arg[0]))
	{
		fprintf(stderr, "L%u: usage: push integer\n", count);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	if (!data.arg)
	{
		fprintf(stderr, "L%u: usage: push integer\n", count);
		fclose(data.file);
		exit(EXIT_FAILURE);
	}
	n = atoi(data.arg);
	add_node(head, n);
}

int is_integer(char ch)
{
	return (isdigit(ch) || (ch == '-' && isdigit(ch)));
}
