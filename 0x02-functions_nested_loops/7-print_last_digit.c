#include "main.h"

/**
*print_last_digit - prints the last digit of the number
*@n: the number whose last digit will be prined
*
*Return: int. the last digit of n
*/
int print_last_digit(int n)
{
	int result;

	if (n >= 0)
	{
		result = _putchar('0' + (n % 10));
	}
	else
	{
		n = -n;
		print_last_digit(n);
	}
	return (result);
}
