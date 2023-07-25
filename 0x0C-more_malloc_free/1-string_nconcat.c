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
	unsigned int i, u, j, v, w, taille;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		taille = j;
	else
		taille = n;
	nconcat = malloc((i + taille + 1) * sizeof(char));
	if (nconcat == NULL)
		return (NULL);
	for (u = 0; u < i; u++)
		nconcat[u] = s1[u];
	v = 0;
	while (s2[v] != '\0')
		v++;
	for (w = i; w < (taille + i); w++)
		nconcat[w] = s2[w - taille];
	return (nconcat);
	free(nconcat);
}
