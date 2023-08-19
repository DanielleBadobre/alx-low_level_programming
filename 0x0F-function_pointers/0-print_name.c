#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer that takes name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
