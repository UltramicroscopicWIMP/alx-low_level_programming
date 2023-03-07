#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: an array of chars
*@accept: the substring whose length would be evaluated
*
*Return: unsigned int. The number of bytes in the initial segment of s 
*which consists only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int count1 = 0;
	int counter = 0;
	int checker = 0;
	int count2;
	char c1 = *s;
	char c2;

	while (c1 != '\0')
	{
		c2 = *accept;
		count2 = 0;
		while (c2 != '\0')
		{
			if (c1 == c2)
			{
				counter++;
			}
			count2++;
			c2 = *(accept + count2);
		}
		if (checker == counter)
		{
			c1 = '\0';
		}
		else
		{
			count1++;
			c1 = *(s + count1);
		}
		checker = counter;
	}
	return (counter);
}
