#include "main.h"

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
print_line(n-1);
}
}
