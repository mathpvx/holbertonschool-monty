#include "monty.h"
/**
 * pall - prints the stack
 * @stack: stack to print
 * @line_num: line number
 */
void pall(stack_t **stack, unsigned int line_num)
{
	(void)line_num;
	stack_t *current;

	current	= *stack;

	if (current == NULL)
		return;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
