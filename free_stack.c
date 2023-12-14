#include "monty.h"

/**
 * free_stack - free the used space
 * @stack: node to be freed
 */

void free_stack(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *new = NULL;


	while (current)
	{
		new = current->next;
		free(current);
		current = new;
	}
	*stack = NULL;
}
