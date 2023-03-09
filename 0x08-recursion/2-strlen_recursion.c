#include "main.h"

/**_strlen_recursion - returns the length of a string
*@s: the string whose length would be returned
*
*Return: int. The length of s.
*/
int _strlen_recursion(char *s)
{
	int length;
	char ch = *s;

	if (ch == '\0')
	{
		length = 0;
	}
	else
	{
		length += 1 + _strlen_recursion(s + 1);
	}
	return (length);
}
