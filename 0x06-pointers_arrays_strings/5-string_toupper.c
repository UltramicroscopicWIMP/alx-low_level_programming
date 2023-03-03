#include "main.h"

/**
*string_toupper - changes all lowercase of a string to uppercase
*@str: An array of chars to be converted to uppercase
*
*Return: An array of chars
*/
char *string_toupper(char *str)
{
	int count = 0;
	int i = 0;
	char c = *str;

	while (c != '\0')
	{
		count++;
		c = *(str + count);
	}
	while (i < count)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] + 'A' - 'a';
		}
		i++;
	}
	return (str);
}

