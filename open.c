#include "monty.h"
/**
 * open_file - opens a file
 * @filename: path to the file
 * Return: a pointer to the file
 */
FILE *open_file(const char *filename)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	return (file);
}
