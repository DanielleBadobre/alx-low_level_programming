#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of s2 bystes to concatenate
 * Return: NULL if fails, adress on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, u, v, w;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	nconcat = malloc((i + 1 + n) * sizeof(char));
	if (nconcat == NULL)
		return (NULL);
	for (u = 0; s1[u] != '\0'; u++)
		nconcat[u] = s1[u];
	v = 0;
	while (s2[v] != '\0')
		v++;
	for (w = 0; w <= n; w++)
		nconcat[u + w] = s2[w];
	return (nconcat);
	free(nconcat);
}
