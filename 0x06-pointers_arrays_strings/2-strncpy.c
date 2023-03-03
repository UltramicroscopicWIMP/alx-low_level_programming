#include "main.h"

/**
*_strncpy - copies n chars from string 1 to string 2
*@dest: Pointer. The string to which n chars are being copied
*@src: Pointer. The string from which n chars are being copied
*@n: int. The number  of chars to be copied
*
*Return: char. A pointer to the copied strings
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

