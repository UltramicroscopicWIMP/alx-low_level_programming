#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "zzz";
    char *f2 = "woz";
    char *f3 = "zello";
    char *t;
    char *x;
    char *t2, *x2;
    char *t3, *x3;

    x = strstr(s, f);
    t = _strstr(s, f);
    x2 = strstr(s, f2);
    t2 = _strstr(s, f2);
    x3 = strstr(s, f3);
    t3 = _strstr(s, f3);
    printf("%s\n", t);
    printf("%s\n", x);
    printf("%s:\n", t2);
    printf("%s:\n", x2);
    printf("%s:\n", t3);
    printf("%s:\n", x3);
    return (0);
}
