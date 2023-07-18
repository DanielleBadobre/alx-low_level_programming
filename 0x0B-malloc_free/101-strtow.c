#include "main.h"
#include <stdlib.h>

/**
 * countWords - counts
 * @str: string
 * Return: number
 */

int countWords(char *str)
{
	int words;

	words = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) == ' ' || *(str + 1) == '\0')
				words++;
			str++;
		}
		else
			str++;
	}
	return (words);
}

/**
 * countChars - counts
 * @str: string
 * Return: number
 */

int countChars(char *str)
{
	int chars;

	chars = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) != ' ' || *(str + 1) != '\0')
				chars++;
			str++;
		}
		else
			break;
	}
	return (chars);
}

/**
 * strtow - separates
 * @str: string
 * Return: pointer
 */

char **strtow(char *str)
{
	int numWords, numChars, i, j;
	char **words;

	i = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	numWords = countWords(str);
	if (numWords == 0)
		return (NULL);
	words = (char **) malloc((numWords + 1) * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	while (i < numWords)
	{
		if (*str == ' ')
			str++;
		else
		{
			numChars = countChars(str);
			*(words + i) = (char *) malloc((numChars + 1) * sizeof(char));
			if (*(words + i) == NULL)
			{
				for (j = 0; j < i; j++)
					free(*(words + j));
				free(words);
				return (NULL);
			}
			for (j = 0; j < numChars; j++)
			{
				*(*(words + i) + j) = *str;
				str++; }
			*(*(words + i) + j) = '\0';
			i++;
		}
	}
	*(words + numWords) = NULL;
	return (words);
}
