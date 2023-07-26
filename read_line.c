#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * read_line - reads buffer from standard input
 *
 * Return: return the buffer read
*/

char *read_line(void)
{
	ssize_t flag;
	size_t n;
	int length;
	char *buffer = NULL;

	flag = getline(&buffer, &n, stdin);
	if (flag == -1)
	{
		printf("Exiting...");
		exit(EXIT_SUCCESS);
	}

	length = strlen(buffer);

	buffer[length - 1] = '\0';

	return (buffer);
}
