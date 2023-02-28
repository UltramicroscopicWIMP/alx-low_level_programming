#include "main.h"

/**
*_strcpy - copies the string pointed by one pointer to
*the string pointed by the other array
*@dest: destination of string pointer to be copied to
*@src: source of string pointer to be copied from
*
*Return: char; returns the copied pointer to the string copy
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int count = 0;
	char c = *src;

	while (c != '\0')
	{
		count++;
		c = *(src + count);
	}
	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	dest[count] = '\0';
	return (dest);
}
