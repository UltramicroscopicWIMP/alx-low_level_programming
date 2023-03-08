#include "main.h"

/**
*_strpbrk - searches a string for any of a set of bytes
*@s: string to be searched 
*@accept: string whose bytes are to be located in s
*
*Return: an array of chars. pointer to the byte in s that match the bytes in acept
*/
char *_strpbrk(char *s, char *accept)
{
	int count1 = 0;
	int checker = 0;
	int count2;
	char ch1 = *s;
	char *ptr;
	char ch2;

	while (ch1 != '\0')
	{
		ch2 = *accept;
		count2 = 0;
		while (ch2 != '\0')
		{
			if (ch2 == ch1)
			{
				ptr[checker] = ch2;
				checker++;
			}
			count2++;
			ch2 = *(accept + count2);						
		}
		count1++;
		ch1 = *(s + count1);
	}
	return (ptr);
}
