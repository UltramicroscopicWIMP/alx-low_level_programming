#include <stdio.h>

/**
 *main - prints all numebrs for 0 to 9
 *
 *return: int. returns 0 upon exit
 */
int main(void)
{
  int x;
  
  for (x = 0; x < 10; x++)
    {
      putchar((int) x);
    }
  putchar('\n');

  return (0);
}
