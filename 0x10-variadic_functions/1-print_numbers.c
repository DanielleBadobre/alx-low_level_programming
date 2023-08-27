#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints all numbers
 * @separator: define character to separate
 * @n: number of numbers to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(arguments, int));
		if (i < n && separator)
			printf("%s", separator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(arguments);
}
