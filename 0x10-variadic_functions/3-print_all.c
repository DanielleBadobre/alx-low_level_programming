#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all the given strings
 * @format: format
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list arguments;

	va_start(arguments, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				break;
			case 'i':
				printf("%i", va_arg(arguments, int));
				break;
			case 'f':
				printf("%i", va_arg(arguments, int));
				break;
			case 's':
				str = va_arg(arguments, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(arguments);
	printf("\n");
}
