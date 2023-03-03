#include "main.h"

/**
*_strncat - catenates n chars from a string to another full string
*@dest: The string onto which contenation occurs
*@src: The string from which n chars are pulled from
*@n: The number of integers to be pulled from src
*
*Return: char Poiner.  A pointer to the resulting concatenation.
*/
char *_strncat (char *dest, char *src, int n)
{
	int count = 0;
	char c = *dest;
	char dest_prime[100];
	int i = 0;

	while (c != '\0')
	{
		count++;
		c = *(dest + count);
	}
	while (i < n)
	{
		dest_prime[count + i] = src[i];
		i++;
	}
	dest = dest_prime;
	return (dest);
}

