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
	unsigned int len1, len2, count1, count2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
	{}
	for (len2 = 0; s2[len2]; len2++)
	{}
	concat = malloc(sizeof(char) + (len1 + n));
	if (concat == NULL)
		return (NULL);
	for (count1 = 0; count1 < len1; count1++)
		concat[count1] = s1[count1];
	for (count2 = 0; count2 < n && s2[count2]; count1++, count2++)
		concat[count1] = s2[count2];
	concat[count1] = '\0';
	return (concat);
}
