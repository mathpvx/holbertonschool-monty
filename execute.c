#include "monty.h"
/**
 * execute_opcode - execute the corresponding function
 * @stack: a double pointer to the stack
 * @opcode: opcode from monty file
 * @line_num: line number
 */
void execute_opcode(stack_t **stack, char *opcode, unsigned int line_num)
{
	int i;

	intstruction_t instructions[] =
	{
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop}
		{NULL, NULL}
	};

	for (i = 0; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, opcode) == 0)
		{
			instructions[i].f(stack, line_num);
			return;
		}
	}
}
