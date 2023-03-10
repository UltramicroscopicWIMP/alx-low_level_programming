#include "main.h"

/**
*_strcat - takes two strings and concatenates them
*@dest: Pointer to the result of the concatenation
*@src: Pointer to the string that must be concatenated with dest
*
*Return: char array, A pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char c = *dest;
	char s = *src;
	int count_d = 0;
	int count_s = 0;
	int i;

	while (c != '\0')
	{
		count_d++;
		c = *(dest + count_d); 
	}
	while (s != '\0')
	{
		count_s++;
		s = *(src + count_s);
	}
	for (i = 0; i < count_s; i++)
	{
		dest[i + count_d] = src[i];
	}
	return (dest);
}
