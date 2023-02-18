#include <stdio.h>

/**
 *main - prints the alphabet in lower case and in reverse
 *
 *Return: int. returns 0 on exit
 */
int main(void)
{
  char c = 'z';
  do
    {
      putchar(c);
      --c;
    }
  while(c >= 'a');
  putchar('\n');
  return (0);
}
