#include "main.h"

/**
*_strncat- catenates n chars from a string to another full string
*@dest: An array of chars. The string onto which contenation occurs
*@src: Array of chars. The string from which n chars are pulled from
*@n: int. The number of integers to be pulled from src
*
*Return: char*.  A pointer to the resulting concatenation.
*/
char *_strncat (char *dest, char *src, int n)
{
	int count = 0;
	char c = *dest;
	int i = 0;

	while (c != '\0')
	{
		count++;
		c = *(dest + count);
	}
	while (i < n)
	{
		dest[count + i] = src[i];
		i++;
	}
	return(dest);
}
