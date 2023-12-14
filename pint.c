#include "monty.h"

/**
 * pint - print the data of the head node
 * @stack: head node to print
 * @line: line of the file executed
 */

void pint(stack_t **stack, unsigned int line)
{
	if (stack == NULL || (*stack) == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	printf("%u\n", (*stack)->n);
}
