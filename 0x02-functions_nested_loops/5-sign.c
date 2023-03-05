#include "main.h"

/**
*print_sign - prints the sign of a digit
*@n: the digit whose sign is to be printed
*
*Return: int. returns 1 for a positive number and -1 otherwise
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
