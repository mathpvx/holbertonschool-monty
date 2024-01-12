#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: the stack
 * @line_num: the line number to display error msgs
 */
void pint(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
