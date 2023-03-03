#include "main.h"

/**
*reverse_array - reverses an array of int
*@a: An array of int
*@n: int. The number of elements in the array
*
*Return: Void. Returns nothing
*/
void reverse_array(int *a, int n)
{
	int c;
	int i = 0;

	while (i < (n / 2))
	{
		c = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = c;
		i++;
	}
}
