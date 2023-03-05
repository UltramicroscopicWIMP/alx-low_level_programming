#include "main.h"
#include <stdio.h>

int __print(int n)
{
  return (n);
}
void more_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
j = 0;
while (j < 15)
{
__print(j);
j++;
}
_putchar('\n');
i++;
}
}
