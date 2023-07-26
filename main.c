#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "main.h"
#include "get_word.h"
#include "read_line.h"
#include "validate.h"

/**
 * main - entry point
 *
 * Return: always return 0
*/

int main(void)
{
	int check;
	char *line, *start_word, *target_word;

	while (1)
	{
		do {
			printf("Starting Word: ");
			line = read_line();
			start_word = get_word(line);
			check = validate(start_word);
			if (check == -1)
				printf("\nInvalid Word!\n\n");
			if (check == 0)
			{
				;
			}
		} while (check != 1);
		do {
			printf("Target Word: ");
			line = read_line();
			target_word = get_word(line);
			check = validate(target_word);
			if (check == -1)
			{
				printf("\n");
				printf("Invalid Word!\n");
				printf("\n");
			}
			if (check == 0)
			{
				;
			}
		} while (check != 1);
		word_chain(start_word, target_word);
	}
	free(line);
	free(start_word);
	free(target_word);

	return (0);
}

/**
 * word_chain - word chain
 *
 * @start_word: the starting word
 * @target_word: the target word
 *
 * Return: return nothing
*/

void word_chain(char *start_word, char *target_word)
{
	int step;
	char *intermediate;

	step = 0;
	intermediate = malloc(sizeof(char) * 3);

	printf("\n");
	if (strcmp(start_word, target_word) != 0)
	{
		printf("%s->", start_word);
		step++;
	}

	step += chain1(intermediate, start_word, target_word);

	step += chain2(intermediate, start_word, target_word);

	if (step == 0)
		printf("No possible word chain found!\n");
	else if (step == 1)
		printf("%s (%d step)\n", target_word, step);
	else
		printf("%s (%d steps)\n", target_word, step);
	printf("\n");

	free(intermediate);
}

/**
 * chain1 - first chain
 *
 * @str: the intermediate word
 * @str1: the start_word
 * @str2: the target_word
 *
 * Return: return the number of steps
 *	   that generated the intermediate word
*/

int chain1(char *str, char *str1, char *str2)
{
	int i, j, check;

	j = 0;

	strcpy(str, str1);
	for (i = 1; str[i] != '\0'; i++)
	{
		strcpy(str, str1);
		str[i] = str2[i];

		check = validate(str);
		if (check == 1)
		{
			if (strcmp(str, str1) != 0 && strcmp(str, str2) != 0)
			{
				printf("%s->", str);
				j++;
			}
		}
		else
		{
			;
		}
	}

	return (j);
}

/**
 * chain2 - second chain
 *
 * @str: the intermediate word
 * @str1: the start_word
 * @str2: the target_word
 *
 * Return: return the number of steps
 *	   that generated the intermediate word
*/

int chain2(char *str, char *str1, char *str2)
{
	int i, j, check;

	j = 0;
	strcpy(str, str2);
	for (i = 1; str[i] != '\0'; i++)
	{
		strcpy(str, str2);
		str[i] = str1[i];

		check = validate(str);
		if (check == 1)
		{
			if (strcmp(str, str1) != 0 && strcmp(str, str2) != 0)
			{
				printf("%s->", str);
				j++;
			}
		}
		else
		{
			;
		}
	}

	return (j);
}
