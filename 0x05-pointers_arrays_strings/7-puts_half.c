#include "main.h"

/**
*puts_half - prints the second half of an array of chars
*@str: an array of chars
*
*Return: Void. Returns nothing
*/
void puts_half(char *str)
{
	int mid;
	int i;
	int count = 0;
	char c = *str;

	while (c != '\0')
	{
		count++;
		c = *(str + count);
	}
	if (count % 2 == 0)
	{
		mid = count / 2;
	}
	else
	{
		mid = (count + 1) / 2;
	}
	for (i = mid; i < count; i++)
	{
		_putchar('\0' + str[i]);
	}
	_putchar('\n');
}
