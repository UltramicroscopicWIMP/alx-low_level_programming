#include <stdio.h>
#include <stdlib.h>

/**
*@argc: the count of cmd arguments
*@argv: an array of pointers to char
*
*Return: int. Returns the result of multiplication or 1 when not all arguments are given
*/
int main(int argc, char *argv[3])
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (EXIT_SUCCESS);
	}
}

