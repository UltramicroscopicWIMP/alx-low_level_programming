#include "main.h"

/**
*_strcmp - compares two strings
*@s1: A pointer to the first string
*@s2: A pointer to the second string
*
*Return: int. returns 0 if they're equal or a non-zero otherwise
*/
int _strcmp(char *s1, char *s2)
{
	char c1 = *s1;
	char c2 = *s2;
	int count1 = 0;
	int count2 = 0;
	int k = 0;
	int i;

	while (c1 != '\0')
	{
		count1++;
		c1 = *(s1 + count1);
	}
	while (c2 != '\0')
	{
		count2++;
		c2 = *(s2 + count2);
	}
	for (i = 0; i < count1; i++)
	{
		if (k < count2)
		{
			if (s1[i] != s2[k])
			{
				return (s1[i] - s2[k]);
			}
			else
			{
				k++;
			}
		}
	}
	return (0);
}

