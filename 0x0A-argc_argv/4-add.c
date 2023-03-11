#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - adds two positive numbers
*@argc: the count of cmd arguments
*@argv: an array of pointers to int
*
*Return: int. Returns 0 if no number is passed in, 1 if only 1
*and the product of the sum of the numbers otherwise
*/
int main(int argc, char *argv[])
{
        int sum = 0;
	int i = 1;
	int numbers;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (EXIT_FAILURE);
	}
	else
	{
		while (i < argc)
		{
			char *ptr;
			numbers = strtol(argv[i], &ptr, 10);
			if(ptr == argv[i] || ptr[0] != '\0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += numbers;
			}
			i++;
		}
		printf("%d\n", sum);
		return (EXIT_SUCCESS);
	}
}
