#include "main.h"

/**
*_strchr - locates a char in an array of chars
*@s: an array of string to be used for searching
*@c: the char to be located in s
*
*Return: char. an array of chars
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	char ch = *s;
	char *ptr;

	while (ch != '\0')
	{
		if (ch == c && *ptr != c)
		{
			ptr = &ch;
		}
		i++;
		ch = *(s + i);
	}
	if ( *ptr != c)
	{
		ptr = NULL;
	}
	return (ptr);
}
