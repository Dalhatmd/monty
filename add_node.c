#include "monty.h"
void add_node(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	temp = *head;
	if (temp != NULL)
		temp->prev = new_node;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
}
