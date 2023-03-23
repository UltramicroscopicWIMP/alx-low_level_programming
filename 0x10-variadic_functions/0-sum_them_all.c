#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@n: const unsigned n: the first of its params
*@...: a list of optional params
*
*Return: int. the total sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list nxt_param;
	int j;
	int sum = 0;

	va_start(nxt_param, n);
	for (j = n; j > 0; j--)
	{
		sum += va_arg(nxt_param, int);
	}
	va_end(nxt_param);
	return (sum);
}
