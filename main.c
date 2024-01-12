#include "monty.h"
/**
 * main - entry point function for monty interpreter
 * @argc: number of command line arguments
 * @argv: array of strings containing the command line arguments
 * Return: 0 on success, or non zero value if fails
 */
int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	char line[MAX_LINE];
	char *filename = argv[1];
	unsigned int line_num = 1;
	FILE *file;
	size_t len;
	char * opcode;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = open_file(filename);

	while (fgets(line, sizeof(line), file))
	{
		len = strlen(line);

		if (len > 0 && line[len -1] == '\n')
			line[len - 1] = '\0';

		opcode = strtok(line, " \t");

		if (opcode == NULL)
		{
			line_num++;
			continue;
		}
		else
			execute_opcode(&stack, opcode, line_num);
		line_num++;
	}
	fclose(file);
	free_stack(stack);

	return (0);
}
