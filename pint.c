#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: double pointer to the head of the stack
 * @line_num: line number in the file
 */
void pint (stack_t **stack, unsigned line_num)
{
	if (*stack == NULL)
	{
		fprintf (stderr, "L%u: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
