#include "main.h"

/**
*_strncat - catenates n chars from a string to another full string
*@dest: The string onto which contenation occurs
*@src: The string from which n chars are pulled from
*@n: The number of integers to be pulled from src
*
*Returns: char Poiner.  A pointer to the resulting concatenation.
*/
char *_strncat (char *dest, char *src, int n)
{
	int count = 0;
	int i = 0;

	while (*dest != '\0')
	{
		count++;
		*dest = *(dest + count);
	}
	while (i < n)
	{
		*dest = src[i];
		*dest = *(dest + 1);
		i++;
	}
	return (dest);
}
