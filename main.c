#include "main.h"
/**
 * main - execution starts here
 *
 * @argc: number of command line arguments
 * @argv: array vector of arguments
 *
 * Return: 0 on success, -1 otherwise
 */
int main(int argc, char **argv)
{
	FILE *fd;

/*	(void) argv;*/
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (0);
}
