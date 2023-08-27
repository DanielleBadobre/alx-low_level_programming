#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - addition
 * @a: first
 * @b: second
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction
 * @a: first
 * @b: second
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: firt
 * @b: second
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: first
 * @b: second
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - modulo
 * @a: first
 * @b: second
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	else
		return (a % b);
}
