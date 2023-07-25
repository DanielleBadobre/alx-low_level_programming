#include "main.h"
#include <stdlib.h>

/**
 * Error - prints error
 * Return: error
 */

void Error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * all_digit - checks
 * @arg: arguments
 * Return: 1 or 0
 */

int all_digit(char **arg)
{
	int i, j;

	for (i = 1; i <= 2; i++)
	{
		for (j = 0; arg[i][j]; j++)
		{
			if (arg[i][j] < '0' || arg[i][j] > '9')
				return (0);
		}
	}
	return (1);
}
/**
 * _calloc - initialize
 * @nmenb: string
 * @size: string
 * Return: pointer
 */

void *_calloc(unsigned int nmenb, unsigned int size)
{
	unsigned int i;
	char *new_array;

	if (nmenb == 0 || size == 0)
		return (NULL);
	new_array = malloc(nmenb * size);
	if (new_array == NULL)
		return (NULL);
	for (i = 0; i < (nmenb * size); i++)
		new_array[i] = 0;
	return (new_array);
}

/**
 * main - multilies
 * @argc: counter
 * @argv: vector
 * Return: ans or error
 */

int main(int argc, char **argv)
{
	int i, j, carry, len, len_s1 = 0, len_s2 = 0;
	char *s1 = argv[1], *s2 = argv[2];
	int *a, *b, *ans;

	if (argc != 3 || all_digit(argv) != 1)
		Error();
	if (*s1 == '0' || *s2 == '0')
		_putchar('0');
	while (*(*(argv + 1) + len_s1))
		len_s1++;
	while (*(*(argv + 2) + len_s2))
		len_s2++;
	len = len_s1 + len_s2 + 1;
	a = (int *) malloc(len_s1 * sizeof(int));
	b = (int *) malloc(len_s2 * sizeof(int));
	ans = _calloc(len, sizeof(int));
	if (a == NULL || b == NULL || ans == NULL)
		Error();
	for (i = len_s1 - 1, j = 0; i >= 0; i--, j++)
		a[j] = s1[i] - '0';
	for (i = len_s2 - 1, j = 0; i >= 0; i--, j++)
		b[j] = s2[i] - '0';
	for (i = 0; i < len_s2; i++)
		for (j = 0; j < len_s1; j++)
			*(ans + i + j) = *(ans + i + j) + b[i] * a[j];
	for (i = 0; i < len_s1 + len_s2; i++)
	{
		carry = ans[i] / 10, ans[i] = ans[i] % 10;
		ans[i + 1] = ans[i + 1] + carry; }
	for (i = len_s1 + len_s2; i >= 0; i--)
		if (ans[i] > 0)
			break;
	for (; i >= 0; i--)
		_putchar(ans[i] + '0');
	_putchar('\n');
	free(a), free(b), free(ans);
	return (0);
}
