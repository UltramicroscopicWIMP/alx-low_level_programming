#include "main.h"

void times_table(void)
{
int i = 0;
int j;
int j1;
int j2;

while (i < 10)
{
j = 0;
j1 = i*(j+1);
j2 = i*(j+2);
_putchar('0'+j1);
while (j < 8)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0'+j2);
j++;
}
_putchar('\n');
i++;
}
return;
}
