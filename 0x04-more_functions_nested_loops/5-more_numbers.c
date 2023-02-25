#include "main.h"

void more_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
j = 0;
while (j < 15)
{
_putchar('0'+j);
j++;
}
_putchar('\n');
i++;
}
}
