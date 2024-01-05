#include "monty.h"
/**
 * pop - Removes the top element of the stack
 * @stack: pointer to head of the stack
 * @line_num: file's line number
 * Return: Void
 */
void pop (stack_t **stack, unsigned int line_num)
{
	stack_t *h = *stack;

	if (!(*stack))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}

	if (h)
	{
		*stack = (h)->next;
		free(h);
	}
}
