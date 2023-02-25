#include "main.h"

void print_diagonal(int n)
{
if(n <= 0)
{
_putchar('\n');
}
else
{
if (1 < n)
{
_putchar(' ');
print_diagonal(n-1);
}
else
{
_putchar('\');
}
}
}
