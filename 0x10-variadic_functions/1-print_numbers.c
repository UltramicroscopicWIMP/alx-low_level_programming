#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_numbers - prints numbers followed by a newline
*@separator: the string to be printed between the numbers
*@n: the nmuber of integers passed to the function
*@...: the optional params
*
*Return: void. prints the optional arguments and returns nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nxt_param;
	int j;

	va_start(nxt_param, n);
	for (j = n; j > 0; j--)
	{
		printf("%d", va_arg(nxt_param, int));
		if (j != 1 &&  separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nxt_param);
}
