#include "main.h"

/**
*leet - encodes a string into leet
*@str: An array of chars
*
*Return: An array of chars
*/
char *leet(char *str)
{
	char s[] = "aeotl";
	char s_cap[] = "AEOTL";
	char encode[] = "43071";
	char c = *str;
	int count = 0;
	int i;

	while (c != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (c == s[i] || c == s_cap[i])
			{
				str[count] = encode[i];
			}
			i++;
		}
		count++;
		c = *(str + count);
	}
	return (str);
}
