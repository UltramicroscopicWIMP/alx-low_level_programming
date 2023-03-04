#include "main.h"

/**
*print_putchar - prints putchar followed by a newline
*
*Return: int. returns 0 on exit
*/
void print_putchar(void)
{
	char *ch = "_putchar";
	int i = 0;
	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
}
/**
*main - calls the print_putchar function
*
*Return: int
*/
int main(void)
{
	print_putchar();
	return (0);
}
