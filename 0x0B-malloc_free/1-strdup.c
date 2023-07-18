#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string to another memory
 * @str: string to duplicate
 * Return: a pointer to the duplicated string on success,
 * NULL if str = NULL or insufficient memory was available
 */

char *_strdup(char *str)
{
	int i;
	char *dup;
	int u;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	dup = malloc((i + 1) * sizeof(char));
		if (dup == NULL)
			return (NULL);
	u = 0;
	while (str[u] != '\0')
	{
		dup[u] = str[u];
		u++;
	}
	return (dup);
	free(dup);
}
