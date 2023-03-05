#include "main.h"

/**
*_isupper - checks if c is uppercase
*@c: the value whose case is to be checked
*
*Return: int. returns 0  if c is uppercase and 1 otherwise
*/
int _isupper(int c)
{
	if (c> 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

