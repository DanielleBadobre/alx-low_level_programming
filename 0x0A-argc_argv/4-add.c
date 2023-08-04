#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: success, 1
 */
int main(int argc, char **argv)
{
	int i, sum, check;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			check = atoi(argv[i]);
			if (check != 0 || argv[i][0] == '0')
			{
				sum += check;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
