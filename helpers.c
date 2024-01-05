#include "monty.h"
/**
 * nlfind - finds newline
 * @list: the string to find \n
 * Return: 1 || 0
 */
int nlfind (char *list)
{
	char *opcode = "\n";

	while (*list != '\0')
	{
		if (*opcode == *list)
		{
			opcode++;
			list++;
			if (*opcode == '\0')
				return (1);
		}
		else
			list++;
	}
	return (0);
}

/**
 * pushint - int for push opcode
 * @list: the content of the file
 * @ln: line number
 * Return: the number
 */
int pushint (char *list, int ln)
{
	char *opcode = "push";

	while (*list != '\0')
	{
		if(*opcode == *list)
		{
			opcode++;
			list++;
			if (*opcode == '\0')
				while (*list)
				{
					if ((*list >= '0' && *list <= '9') || *list == '-')
					{
						combfind(list, ln);
						return (atoi(list));
					}
					else if (*list == ' ')
						list++;
					else
					{
						fprintf(stderr, "L%d: usage: push integer\n", ln);
						exit(EXIT_FAILURE):
					}
				}
		}
		else
			list++;
	}
	return (0);
}

/**
 * combfind - finds nonnumbers and number combinations
 * @list: the string
 * @ln: line number
 * Return: 1
 */
int combfind(char *list, int ln)
{
	int i = 1;

	while (list[i])
	{
		if (list[i] == '\0' || list[i] == '\n')
			break;
		if ((list[i] >= '0' && list[i] <= '9') || list[i] == ' ')
			i++;
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", ln);
			exit(EXIT_FAILURE);
		}
	}
	return (1);
}
