#include <stdio.h>

/**
 *main - prints all numebrs for 0 to 9
 *
 *return: int. returns 0 upon exit
 */
int main(void)
{
  int num;
  
  for (num = 0; num < 10; num++)
    {
      printf("%d", num);
    }
  putchar('\n');

  return (0);
}