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
	int i = 0;
	int count = 0;

	while (c != '\0')
	{
		count++;
		c = *(str + count);
	}
	while (i < count)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 'N' - 'A';
		}
		i++;
	}
	return (str);
}
