#include "monty.h"

/**
 * read_line - read the line of the file
 * @c: file to read lines from
 * @stack: head node to start with
 */

void read_line(char *c, stack_t **stack)
{
	size_t len;
	unsigned int num = 0;
	char *line = NULL;
	char *delim = "\n \r\t";
	char *com;
	FILE *pf;

	pf = fopen(c, "r");
	if (!pf)
	{
		printf("Error: Can't open file %s\n", c);
		exit(EXIT_FAILURE);
	}
	while ((getline(&line, &len, pf)) != -1)
	{
		com = strtok(line, delim);
		num++;
		if (com)
		{
			exec_com(stack, com, num);
		}
	}
	if (com)
	{
		free(line);
	}
	free_stack(stack);
	fclose(pf);
}
