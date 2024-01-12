#include "monty.h"
/**
 * nop - doesn't do anything
 * @stack: the stack
 * @line_num: the line number
 */
void nop(stack_t **stack, unsigned int line_num)
{
	(void)**stack;
	(void)line_num;
}
