#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*@s1: the first string
*@s2: the second string
*@n: the number of bytes to be concatenated from s2
*
*Return: pointer to char. Pointer to newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	str = malloc(sizeof(s1) + n);
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < n + strlen(s1))
	{
		if (i < strlen(s1))
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[i - strlen(s1)];
		}
		i++;
	}
	str[strlen(s1) + n] = '\0';
	return (str);
}
