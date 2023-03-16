#include "main.h"
#include <stdlib.h>

/**
*mul - multiplies two positive numbers
*@num1: the first number in base 10
*@num2: the second number in base 10
*
*Return: int. Returns the exit status
*/
int mul(int argc, char *argv[2])
{
	int i = 0;
	int product = 1;
	int numbers;
	char *ptr;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit (98);
	}
	while (i < 2)
	{
		numbers = strtol(argv[i], &ptr, 10);
		if (ptr == argv[i])
		{
			product *= numbers;
		}
		else
		{
			printf("Error\n");
			exit (98);
		}
		i++;
	}
	return (product);
}
