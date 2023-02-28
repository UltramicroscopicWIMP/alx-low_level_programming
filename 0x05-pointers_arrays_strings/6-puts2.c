#include "main.h"

/**
*puts2 - prints every char at even index
*@str: an array of chars
*
*Return: Returns nothing
*/
void puts2(char *str)
{
	char c = *str;
	int count = 0;
	int i;

	while (c != '\0')
	{
		count++;
		c = *(str + count);
	}
	for (i = count-1; i >= 0; i--)
	{
		_putchar('\0' + str[i]);
	}
	_putchar('\n');
}
