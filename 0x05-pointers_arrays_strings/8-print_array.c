#include "main.h"

/**
*print_array - prints n elements of an array of integers
*@a: an array of ints
*@n: an integer
*
*Return: Void. Returns nothing
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", a[i]);
		i = i + 1;
	}
	printf("%d\n", a[n]);
}
