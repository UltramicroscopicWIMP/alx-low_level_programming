#include "main.h"

/**
*_isalpha - checks if a value corresponds to an alphabetic letter
*@c: the value to be checked
*
*Return: int. Returns 0 if it is an alphabet and 1 otherwise
*/
int _isalpha(int c)
{
	if (c < 65 || c > 123)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

