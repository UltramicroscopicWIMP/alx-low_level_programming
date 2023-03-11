#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the name of the program that called it
*@argc: - the count of arguments in cmd
*@argv: an array of pointers to char
*
*Return: void. returns nothing.
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
