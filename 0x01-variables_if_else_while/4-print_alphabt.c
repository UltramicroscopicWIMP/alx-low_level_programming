#include <stdio.h>

/**
 *main - prints the lowercase alphabet except e and q
 *
 *Return: int. returns 0 on exit
 */
int main(void)
{
  char ch;
  
  for (ch = 'a'; ch <= 'z'; ++ch)
    {
      if(ch !='e' && ch !='q')
	{
	  putchar(ch);
	}
    }
  putchar('\n');

  return (0);
}
