#include "monty.h"
data_t data = {NULL, NULL, NULL};
stack_t *stack = NULL;
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
	char *line = NULL;
	size_t len = 0;
	ssize_t bytes_read;
	unsigned int line_no = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open_file(argv[1]);
	data.file = fd;
	while (bytes_read != -1)
	{
		bytes_read = getline(&line, &len, fd);
		data.line = line;
		line_no++;
		if (bytes_read != -1)
		{
			execute(line, &stack, line_no, fd);
		}
		free(line);
	}
	fclose(fd);
	return (0);
}
