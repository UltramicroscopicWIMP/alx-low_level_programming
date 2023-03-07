#include "main.h"

/**
*_memset - fillls memory iwth a constant byte
*@s: the pointer whose memory would be filled
*@b: the constant to be filled into memory
*@n: the number of bytes of memory to be filled
*
*Return: char. a pointer to the filled bytes of memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
