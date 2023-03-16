#include "main.h"
#include <stdlib.h>

/**
*_calloc - allocates memory for an array using malloc
*@nmemb: unsigned int. number of array elements
*@size: unsigned int. size of array in bytes
*
*Return: pointer to void. Returns a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb*size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
