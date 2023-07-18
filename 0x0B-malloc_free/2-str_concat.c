#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the result of concat,
 * NULL on error
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int u;
	int n;
	int v;
	char *concat;

	if (s1 == NULL)
	{
		if (s2 == NULL)
			return (NULL);
		else
			return (s2);
	} else if (s2 == NULL)
		return (s1);
	i = 0;
	while (s1[i] != '\0')
		i++;
	v = 0;
	while (s2[v] != '\0')
	{
		i++;
		v++;
	}
	concat = malloc((i + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	u = 0;
	while (s1[u] != '\0')
	{
		concat[u] = s1[u];
		u++;
	}
	n = 0;
	while (s2[n] != '\0')
	{
		concat[u + n] = s2[n];
		n++;
	}
	return (concat);
	free(concat);
}
