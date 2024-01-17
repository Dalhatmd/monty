#include "monty.h"
FILE *open_file(const char *file)
{
	FILE *fd;

	fd = fopen(file, "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	return (fd);
}
