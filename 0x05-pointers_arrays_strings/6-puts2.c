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

	while (c != '\0')
	{
		count++;
		_putchar('\0' + c);
		c = *(str + (2*count));
	}
	_putchar('\n');
}
