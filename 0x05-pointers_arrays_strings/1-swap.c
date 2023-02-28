#include "main.h"

/**
*swap_int- swaps the values pointed to by two pointers
*@a: The pointer to the first integer
*@b: The pointer to the second integer
*
*Return: Void. Returns nothing
*/
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
