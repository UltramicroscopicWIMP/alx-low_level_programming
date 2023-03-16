#include "main.h"
#include <stdlib.h>

/**
*array_range - creates an array of integers
*@min: the minimum integer
*@max: the maximum integer
*
*Return: Pointer int. A pointer to an integer
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * (max - min) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i <= (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
