#include "main.h"

/**
*leet - encodes a string into leet
*@str: An array of chars
*
*Return: An array of chars
*/
char *leet(char *str)
{
	char c = *str;
	int count = 0;
	int i = 0;

	while (c != '\0')
	{
		count++;
		c = *(str + count);
	}
	while (i < count)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
		        str[i] = '7';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
		i++;
	}
	return (str);
}
