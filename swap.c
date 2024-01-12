#include "monty.h"
/**
 * swap - swaps the 2 top elements of the stack
 * @stack: the stack
 * @line_num: the line number to display error msgs
 */
void swap(stack_t **stack, unsigned int line_num)
{
	int temp;

	temp = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
