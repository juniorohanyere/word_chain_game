#include <stdio.h>
#include <string.h>

#include "word_list.h"

/**
 * validate - validates if a word exits in a given list
 *
 * @word: the word to validate its exitstence
 *
 * Return: return 0 if word is NULL
 *	   return 1 if word exits in the list
 *	   return -1 if word does not exit
*/

int validate(char *word)
{
	int i;
	char **list;

	if (word == NULL)
		return (0);
	list = word_list();

	for (i = 0; list[i] != NULL; i++)
	{
		if (strcmp(list[i], word) == 0)
			return (1);
	}

	return (-1);
}
