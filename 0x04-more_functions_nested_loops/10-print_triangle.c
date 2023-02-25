#include "main.h"

void print_triangle(int size)
{
int block;
int space;

if (size <= 0)
{
_putchar('\n');
}
else
{
block = 1;
space = size - block;

while (space > 0)
{
_putchar(' ');
space--;
}
while (block < size)
{
_putchar('#');
block++;
}
_putchar('\n');
print_triangle(size-1);
}
}
