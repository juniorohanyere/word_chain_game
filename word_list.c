#include <stdlib.h>

/**
 * word_list - contains a list of words for the game
 *
 * Return: return the list of words
*/

char **word_list(void)
{
	static char *words[] = {
		"cat", "cot", "dog", "dot", "rat", "rot", "log", "lot", NULL,
	};

	return (words);
}
