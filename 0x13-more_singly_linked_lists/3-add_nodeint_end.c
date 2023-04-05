#include "lists.h"

/**
*add_nodeint_end - adds a new node to the end of a linkedlist
*@head: Address of the pointer to the first node
@n: Value stored at new node
*
*Return: Pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	while ((*head != NULL)
	{
		*head = (*head)->next;
	}
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
		*head = node;
	}
	return (node);
}
