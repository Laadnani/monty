#include "monty.h"
stack_t **global_node;

/**
 * main - read the file and execute its lines
 * @argc: argument count
 * @argv: arguments in CLI
 * Return: executed lines or error otherwise
 */

int main(int argc, char* argv[])
{
	stack_t *node;

	if (argc != 2)
	{
		perror("USAGE: monty <file> \n");
		exit(EXIT_FAILURE);
	}
	node = NULL;
	global_node = &node;
	read_line(argv[1], &node);
	return (0);
}
