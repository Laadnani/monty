#include "monty.h"

/**
 * push - push a node to the end of the stack
 * @stack: stack node to push data to
 * @line: line read on the file
 */

void push(stack_t **stack, unsigned int line)
{
	stack_t *current;
	char *b;
	char *delim = "\n \t\r";

	b = strtok(NULL, delim);
	if (b == NULL)
	{
		printf("L%u: usage push integer\n", line);
		exit(EXIT_FAILURE);
	}
	current = malloc(sizeof(stack_t));
	if (current == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	current->n = atoi(b);
	current->prev = NULL;
	current->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = current;
	}
	*stack = current;
}
