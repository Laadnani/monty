#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @stack: current head node
 * @line_number: line number on the read file
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void) line_number;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
