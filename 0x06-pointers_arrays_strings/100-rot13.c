#include "main.h"

/**
*rot13 - encodes a string using rot13
*@str: an array of chars
*
*Return: An array of chars
*/
char *rot13(char *str)
{
	char c = *str;
	int count = 0;

	while (c != '\0')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			str[count] = str[count] + 'N' - 'A';
		}
		count++;
		c = *(str + count);
	}
	return (str);
}
