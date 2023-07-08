#include "main.h"
/**
 * _strcmp - prints the consecutive caracters of s1 that are in s2.
 * @s1: source string
 * @s2: searching string
 *
 * Return: new string.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}	
}
