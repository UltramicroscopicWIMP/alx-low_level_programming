#include "main.h"

/**
*_strlen - counts and returns the number of chars in a string
*@s: an array of chars
*
*Return: int. Returns the number of chars in the string
*/
int _strlen(char *s)
{
	char c = *s;
	int count = 0;

	while (c != '\0')
	{
		count++;
		c = *(s + count);
	}
	return (count);
}
