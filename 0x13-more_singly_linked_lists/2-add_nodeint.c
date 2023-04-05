#include "lists.h"

/**
*add_nodeint - adds a node to the beginning of a linkedlist
*@head: A pointer to the address of the first node of the linkedlist of ints
*@n: Integer. Value stored at new node
*
*Return: Pointer to the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	return (node);
}
