#include "lists.h"

/**
*print_listint - prints a linkedlist of integers
*@h: Pointer to the first node of the linked list
*
*Return: The number of nodes in the linkedlist. returns 0 if the list is empty
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
