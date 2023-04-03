#include "lists.h"

/**
*print_list- prints the values stored in the nodes of a linked list
*@h: A pointer to the linked list
*
*Return: size_t. The number of nodes in the linked list
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	  count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
