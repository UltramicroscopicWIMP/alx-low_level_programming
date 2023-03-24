#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
*print_all - prints anything it receives
*@format: the list of types of arguments passed to the function
*@...: the other optional params
*
*Return: void.
*/
void print_all(const char * const format, ...)
{
	va_list nxt_param;
	int size = strlen(format);
	char *_string_param;
	int i = 0;

	va_start(nxt_param, *format);
	while (i < size)
	{
		switch(format[i])
		{
			case 'c':
				printf("%c", va_arg(nxt_param, int));
				break;
			case 'i':
				printf("%d", va_arg(nxt_param, int));
				break;
			case 'f':
				printf("%f", va_arg(nxt_param, double));
				break;
			case 's':
				_string_param = va_arg(nxt_param, char*);
				if (_string_param == NULL)
				{
					_string_param = "(nil)";
				}
				printf("%s", _string_param);
				break;
		}
		if (i != size - 1 && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(nxt_param);
}
