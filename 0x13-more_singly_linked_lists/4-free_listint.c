#include "lists.h"

/**
*free_listint - frees all the nodes in a linkedlist of ints
*@head: A pointer to the first node
*
*Return: No value
*/
void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
