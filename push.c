#include "monty.h"
/**
 * push - push a new node with value
 * @stack: stack to push
 * @line_num: line number
 */
void push(stack_t **stack, unsigned int line_num)
{
	(void)line_num;
	char *remaining_line;
	stack_t *new_top;
	int num;
       
	new_top = malloc(sizeof(stack_t));

	if (new_top == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	remaining_line = strtok(NULL, " \t");

	if (remaining_line == NULL || check_int(remaining_line) == -1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}

	num = atoi(remaining_line);

	new_top->n = num;
	new_top->prev = NULL;
	new-tp^->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_top;

	*stack = new_top;
}
