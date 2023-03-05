#include "main.h"

/**
*_islower - checks if a char is a lowercase
*@c: the value to be checked
*
*Return: int. returns 0 if c is a lowercase and 1 otherwise
*/
int _islower(int c)
{
	if (c < 97 || c > 123)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

