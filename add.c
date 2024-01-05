#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: double pointer to the head of the stack
 * @line_num: line number in the file
 */
void add(stack_t **stack, unsigned int line_num)
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;

	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}
