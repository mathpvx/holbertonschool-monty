#include "monty.h"
/**
 * check_int - check if input is an integer
 * @str: the tring to check
 * Return: 1 or -1
 */
int check_int(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]) == 0 && str[i] != '-')
				return (-1);
	}
	return (1);
}
