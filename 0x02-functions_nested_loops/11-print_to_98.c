#include "main.h"
#include <stdio.h>

/**
*print_to_98 - prints all natural numbers from n to 98
*@n: int. the starting point
*
*Return: void. Returns nothing
*/
void print_to_98(int n)
{
	int tmp;
	int tmp_next;

	printf("%d", n);
	if (n > 98)
	{
		tmp = n - 1;
		tmp_next = n - 2;
		while (tmp >= 98 && tmp_next >= 98)
		{
			printf(", %d, %d", tmp, tmp_next);
			tmp = tmp - 2;
			tmp_next = tmp - 1;
		}
	}
	else
	{
		tmp = n + 1;
		tmp_next = n + 2;
		while (tmp <= 98 && tmp_next <= 98)
		{
			printf(", %d, %d", tmp, tmp_next);
			tmp = tmp + 2;
			tmp_next = tmp + 1;
		}
	}
	if (n % 2 == 1)
	{
		printf(", %d", 98);
	}
	printf("\n");
}
