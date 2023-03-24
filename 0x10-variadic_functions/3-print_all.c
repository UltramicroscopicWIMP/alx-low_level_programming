#include "variadic_functions.h"

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
	int size = strlen(format), i = 0;
	char *_string_param, *sep = ", ";

	va_start(nxt_param, *format);
	while (i < size)
	{
		switch(format[i])
		{
			case 'c':
				printf("%c%s", va_arg(nxt_param, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(nxt_param, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(nxt_param, double), sep);
				break;
			case 's':
				_string_param = va_arg(nxt_param, char*);
				if (_string_param == NULL)
					_string_param = "(nil)";
				printf("%s%s", _string_param, sep);
		}
		if (i == size - 2)
			sep = "";
	        i++;
	}
	printf("\n");
	va_end(nxt_param);
}
