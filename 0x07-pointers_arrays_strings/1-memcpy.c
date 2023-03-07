#include "main.h"

/**
*_memcpy - copies memory area
*@dest: pointer to memory area to be returned
*@src: memory area from which n bytes must be copied
*@n: the number of bytes to be copied from src to dest
*
*Return: char. an array of memory areas
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
