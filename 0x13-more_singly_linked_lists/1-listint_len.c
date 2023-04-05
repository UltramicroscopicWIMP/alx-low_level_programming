#include "lists.h"

/**
*listint_len - counts the number of nodes in a linkedlist of ints
*@h: Pointer to the first node of the linkedlist
*
*Return: The number of nodes in the linkedlist. Returns 0 if the list is empty
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
