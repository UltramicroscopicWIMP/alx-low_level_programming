#include "main.h"

int main (void)
{
char ch[] = "_putchar\n";
int i = 0;

while (i < findLen(ch))
{
_putchar(ch[i]);
 i++;
}
return (0);
}

int findLen(char ch[])
{
int len = 0;
while (ch[len] !='\0')
{
len++;
}
return len;
}
