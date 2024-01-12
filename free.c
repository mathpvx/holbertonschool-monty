#include "monty.h"
/**
 * free - frees the stack
 * @stack: the stack
 */
void free(stack_t **stack)
{
	while (stack != NULL)
	{
		stack_t *temp = stack;
		stack = stack->next;
		free(temp);
	}
}
