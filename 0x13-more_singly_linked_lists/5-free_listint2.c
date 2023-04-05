#include "lists.h"

/**
*free_listint2 - frees all the nodes in a linkedlist and assigns head to NULL
*@head: The address of a pointer to the first node
*
*Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *prev;

	while (*head != NULL)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		prev = NULL;
	}
	head = NULL;
}
