#include "main.h"

/**
*_abs - prints the absolute value of a digit
*@n: the digit whose absolute value will be printed
*
*Return: int. returns the number and strips off any negative sign
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
