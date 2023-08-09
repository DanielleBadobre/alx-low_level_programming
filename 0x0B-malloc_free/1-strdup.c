#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates str
 * @str: string to duplicate
 * Return: a pointer to duplicate of str
 */
char *_strdup(char *str)
{
	int i, u;
	char *dup;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	dup = malloc(i * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);
	for (u = 0; str[u] != '\0'; u++)
		dup[u] = str[u];
	return (dup);
	free(dup);
}
