#include "main.h"

/**
*rev_string - reverses a string
*@s: a array of strings
*
*Return: Void. Returns nothing
*/
void rev_string(char *s)
{
	int i;
	char x;
	int k = 0;
	char c = *s;
	int count = 0;

	while (c != '\0')
	{
		count++;
		c = *(s + count);
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (k <= i)
		{
			x = s[k];
			s[k] = s[i];
			s[i] = x;
			k++;
		}
	}
}
