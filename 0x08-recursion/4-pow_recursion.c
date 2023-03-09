#include "main.h"

/**
*_pow_recursion - finds x raised to the power y
*@x: the base number
*@y: the exponent
*
*Return: int. returns the value of x raised to the power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
}
