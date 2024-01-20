#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

extern stack_t *stack;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct data - use data throughout files
 * @arg: arguments for functions
 * @file: pointer to montu file
 * @line: content of a file;
 */
typedef struct data
{
	char *arg;
	FILE *file;
	char *line;
} data_t;
extern data_t data;

FILE *open_file(const char *file);
void add_node(stack_t **head, int n);
int execute(char *line, stack_t **stack, unsigned int count, FILE *file);
void push(stack_t **head, unsigned int count);
int is_integer(char ch);
void pall(stack_t **stack, unsigned int count);
void pint(stack_t **stack, unsigned int count);
void pop(stack_t **stack, unsigned int count);
void _free(stack_t *head);
void swap(stack_t **stack, unsigned int count);
int count_elem(stack_t *stack);
#endif
