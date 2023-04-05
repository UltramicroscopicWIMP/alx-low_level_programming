#include "lists.h"

/**
*get_nodeint_at_index - Finds the nth node of the linked list
*@head: A pointer to the first node
*@index: The index of the node beginning from 0 - the first node
*
*Return: Address of the nth node - where n = index + 1
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = NULL;
	i = 0;
	while (i < index)
	{
		if (head == NULL)
			break;
		head = head->next;
		i++;
	}
	if (i == index)
		node = head;
	return (node);
}
