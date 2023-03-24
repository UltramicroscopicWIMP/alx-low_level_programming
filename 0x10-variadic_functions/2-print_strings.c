#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
*print_strings - prints strings followed by a new line
*@separator: string to be printed between the string params
*@n: const unsigned int. the number of optional params
*@...: the optional params
*
*Return: void. Prints strings followed by a newline and returns void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nxt_param;
	int j;
	char *_param;

	va_start(nxt_param, n);
	for (j = n; j > 0; j--)
	{
		_param = va_arg(nxt_param, char*);
		if (_param == NULL)
		{
			_param = "(nil)";
		}
		printf("%s", _param);
		if (j != 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nxt_param);
}
