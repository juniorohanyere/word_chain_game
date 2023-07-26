#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "get_word.h"

/**
 * get_word - get the first word from a line of input
 *
 * @line: the line of input
 *
 * Return: return the first word found
 *	   return NULL if there is more than one word
*/

char *get_word(char *line)
{
	int i;
	char **tokens;

	tokens = tokenize(line);

	for (i = 0; tokens[i] != NULL; i++)
		;

	if (tokens[1] != NULL)
	{
		printf("Expected one word, but got %d words\n", i);
		return (NULL);
	}

	return (tokens[0]);
}

/**
 * tokenize - tokenize a line of text into words
 *
 * @line: the line of text to tokenise
 *
 * Return: return the tokens generated
*/

char **tokenize(char *line)
{
	int i;
	char **tokens;
	char *token;

	tokens = malloc(sizeof(char *) * 1024);

	token = strtok(line, " ");

	for (i = 0; token != NULL; i++)
	{
		tokens[i] = token;

		token = strtok(NULL, " ");
	}

	return (tokens);
}
