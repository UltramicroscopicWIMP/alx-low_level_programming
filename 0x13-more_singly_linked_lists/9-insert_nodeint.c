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
	listint_t *prev, *node, *start;
	unsigned int i;

	start = *head;
	node = malloc(sizeof(listint_t));
	i = 0;
	while (i < idx)
	{
		if (*head == NULL)
			break;
		prev = *head;
		*head = (*head)->next;
		i++;
	}
	if (node !=  NULL && i == idx)
	{
		node->n = n;
		if (*head != NULL)
		{
			if (i != 0)
			{
				prev->next = node;
				node->next = *head;
			}
			else
			{
				node->next = *head;
				start = node;
			}
		}
		else
		{
			node->next = NULL;
			start = node;
		}
		*head = start;
	}
	else
	{
		node = NULL;
	}
	return (node);
}
