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
	unsigned int i, size1, size2, size;
	char *nconcat;

	i = 0;
	size1 = 0;
	size2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	if (n >= size2)
		size = size2;
	else
		size = n;
	nconcat = malloc((size1 + size + 1) * sizeof(char));
	if (nconcat == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		nconcat[i] = s1[i];
	for (i = size1; i < (size1 + size); i++)
		nconcat[i] = *(s2 + i - size1);
	*(nconcat + i) = '\0';
	return (nconcat);
}
