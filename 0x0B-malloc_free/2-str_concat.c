#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to result of concatenation
 */
char *str_concat(char *s1, char *s2)
{
	int i, u, n, m;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (u = 0; s2[u] != '\0'; u++)
	{}
	concat = malloc((u + i + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (n = 0; s1[n] != '\0'; n++)
		concat[n] = s1[n];
	for (m = 0; s2[m] != '\0'; m++)
		concat[n + m] = s2[m];
	return (concat);
	free(concat);
}
