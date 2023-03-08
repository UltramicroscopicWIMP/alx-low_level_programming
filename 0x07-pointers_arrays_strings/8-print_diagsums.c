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
		leading_sum = leading_sum + a[i];
		off_sum = off_sum + a[size - i - 1];
		i++;
	}
	printf("%d, %d", leading_sum, off_sum);
}
