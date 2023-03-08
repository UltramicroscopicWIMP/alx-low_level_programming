#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
*_strstr - locates a substring
*@haystack: the string to be searched
*@needle: the substring to be looked for
*
*Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int checker = 0;
	int count_h = 0;
	int count_n = 0;
	int node = 0;
	char *ptr = malloc(sizeof(char *));
	char ch_h = *haystack;
	char ch_n = *needle;

	while (ch_h != '\0')
	{
		count_h++;
		ch_h = *(haystack + count_h);
	}
	while (ch_n != '\0')
	{
		count_n++;
		ch_n = *(needle + count_n);
	}
	while (i < count_h)
	{
		if (needle[0] == haystack[i])
		{
			node = i;
			i = count_h - 1;
		}
		i++;
	}
	while (j < count_n - 1)
	{
		if (needle[j] == haystack[node + j])
		{
			checker++;
		}
		j++;
	}
	if (checker == count_n - 1)
	{
		while (k < count_h - node)
		{
		  *(ptr + k) = *(haystack + node + k);
			k++;
		}
	}
	else
	{
		ptr = NULL;
	}
	return (ptr);
}
