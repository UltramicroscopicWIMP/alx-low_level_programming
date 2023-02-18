#include <stdio.h>

/**
 *main - prints out the alphabet in boht lower case and upper case
 *
 *Return: int. returns 0 on exit
 */
int main(void)
{
  char ch;
  
  for (ch = 'a'; ch <= 'z'; ++ch)
    {
      putchar(ch);
    }
  for (ch = 'A'; ch <= 'Z'; ++ch)
    {
      putchar(ch);
    }
  putchar('\n');
  
  return (0);
}
