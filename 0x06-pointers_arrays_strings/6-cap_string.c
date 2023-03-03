#include "main.h"

/**
*cap_string - capitalizes all words of a string
*@str: An array of chars
*
*Return: An array of chars
*/
char *cap_string(char *str)
{
	char sep[] = {' ', '\t', '\n', ',' , ';', '.', '!', '?', '\"', '(', ')', '{', '}'};
	char c = *str;
	char s = sep[0];
	int count_sep = 0;
	int i = 0;
	int count = 0;
	int k;

	while (c != '\0')
	{
		count++;
		c = *(str + count);
	}
	while (s != '\0')
	{
		count_sep++;
		s = sep[count_sep];
	}
	while (i < count)
	{
		k = 0;
		while (k < count_sep)
		{
			if ((str[i]) == sep[k] && ((str[i + 1] >= 'a') && (str[i + 1] <= 'z')))
			{
				str[i + 1] = str[i + 1] + 'A' - 'a';
			}
			k++;
		}
		i++;
	}
	return (str);
}

