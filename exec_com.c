#include "monty.h"

/**
 * exec_com - read command from file
 * @stack: the head node of the stack
 * @com: command to execute
 * @num: line of the file to be executed
 */

void exec_com(stack_t **stack, char *com, unsigned int num)
{
	int i;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	for (i = 0; ops[i].opcode; i++)
	{
		if (strcmp(com, ops[i].opcode) == 0)
		{
			ops[i].f(stack, num);
			return;
		}
	}
	if (strlen(com) != 0)
	{
		printf("L%u: unknown instruction %s\n", num, com);
		exit(EXIT_FAILURE);
	}
}
