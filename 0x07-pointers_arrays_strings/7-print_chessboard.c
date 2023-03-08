#include "main.h"

/**
*print_chessboard - prints the chessboard
*@a[8]: a 2D array with 8 columns
*
*Return: void. Returns nothing
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;
	int row = 0;
	char *ch1 = a[0];

	while (*ch1 != '\0')
	{
		row++;
		ch1 = a[row];
	}
	while (i <= row - 1)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
