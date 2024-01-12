#include "monty.h"
/**
 * add - adds the top 2 elements
 * @stack: the stack
 * @line_num: line number to display error msgs
 */
void add(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_num);
}
