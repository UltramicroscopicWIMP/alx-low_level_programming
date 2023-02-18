#include <stdlib.h>
#include <time.h>
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
      putchar(48+x);
    }
  putchar('\n');

  return (0);
}
