#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: the stack
 * @line_num: line number to display error msgs
 */
void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

	*stack = (*stack)->next;
	free(temp);
}
