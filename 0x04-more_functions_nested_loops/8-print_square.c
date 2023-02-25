#include "main.h"

void print_block(int size)
{
while (size > 0)
{
_putchar('#');
size--;
}
}
 void print_square(int size)
{
while (size > 0)
{
print_block(size);
_putchar('\n');
size--;
}
}
