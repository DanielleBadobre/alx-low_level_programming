#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum args
 * @n: given number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(arguments, int);

	va_end(arguments);
	return (sum);
}
