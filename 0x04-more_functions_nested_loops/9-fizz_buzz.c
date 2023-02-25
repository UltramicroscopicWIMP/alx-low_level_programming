#include "main.h"

void fizz_buzz (int n)
{
int i = 1;
int mul3 = 4;
int mul5 = 4;
int mul3_5 = 8;
int j;
char a[] = "Fizz";
char b[] = "Buzz";
char ab[] = "FizzBuzz";

while (i < 101)
{
if (i%3 == 0 && i%5 == 0)
{
j = 0;
while (j < mul3_5)
{
_putchar(ab[j]);
_putchar(' ');
j++;
}
}
else if (i%3 == 0)
{
j = 0;
while ( j < mul_3)
{
_putchar(a[j];
_putchar(' ');
j++;
}
}
else if (i%5 == 0)
{
j = 0;
while (j < mul_5)
{
_putchar(b[j]);
_putchar(' ');
j++;
}
}
else
{
_putchar('0'+i);
}
i++;
}
_putchar('\n');
}
