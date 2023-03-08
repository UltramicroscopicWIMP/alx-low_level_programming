#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints the sum of the two diagonals of a square matrix of ints
*@a: an array of ints
*@size: int. the size of the square matrix
*
*Return: void. returns nothing
*/
void print_diagsums(int *a, int size)
{
	int leading_sum = 0;
	int off_sum = 0;
	int i = 0;

	while (i < size)
	{
		leading_sum = leading_sum + a[i * (size + 1)];
		off_sum = off_sum + a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, %d\n", leading_sum, off_sum);
}
