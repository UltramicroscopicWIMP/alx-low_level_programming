#include "main.h"

/**
 *_isdigit - checks if c is a digit
 *@n: the value to be checked
 *
 *Return: int. returns 1 if n is a digit and 0 oherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
