#include "lists.h"

/**
*insert_nodeint_at_index - inserts a new node at index
*@head: Address of the pointer to the first node
*@idx: The index at which node is inserted beginnnig from 0 - the first node
*@n: The value stored at new node
*
*Return: A pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nxt, *node, *start;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	start = *head;
	i = 0;
	while (i < idx - 1)
	{
		if (*head == NULL)
			break;
		*head = (*head)->next;
		i++;
	}
	if (node !=  NULL && (i == idx - 1 || idx == 0))
	{
		node->n = n;
		nxt = NULL;
		if (*head != NULL)
		{
			nxt = (*head)->next;
			(*head)->next = node;
			node->next = nxt;
			*head = start;
		}
		else
		{
			node->next = nxt;
			*head = node;
		}
	}
	else
	{
		node = NULL;
	}
	return (node);
}
