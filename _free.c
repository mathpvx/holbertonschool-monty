#include "monty.h"
/**
 * _free - frees the stack
 * @stack: the stack
 */
void _free(stack_t *stack)
{
	while (stack != NULL)
	{
		stack_t *temp = stack;

		stack = stack->next;
		free(temp);
	}
}
