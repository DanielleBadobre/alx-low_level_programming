#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: bit number of s2 to concatenate
 * Return: pointer to result of concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, u, x, m;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (u = 0; s2[u] != '\0'; u++)
	concat = malloc((i + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		concat[x] = s1[x];
	if (u <= n)
	{
		for (m = 0; s2[m] != '\0'; m++)
			concat[x + m] = s2[m];
	}
	else
		for (m = 0; m < n; m++)
			concat[x + m] = s2[m];
	concat[x + m] = '\0';
	return (concat);
}
