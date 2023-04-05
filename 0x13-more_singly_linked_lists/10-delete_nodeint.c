#include "lists.h"

/**
*delete_nodeint_at_index - deletes a node at specified index from linkedlist
*@head: Address of pointer to the first node
*@index: index of nth node
*
*Return: int. 1 if the removal was successful, and -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int bool;
	unsigned int i;
	listint_t *rm, *start, *prev;

	i = 0;
	bool = -1;
	start = *head;
	while (i < index)
	{
		if (*head == NULL)
			break;
		prev = *head;
		*head = (*head)->next;
		i++;
	}
	rm = *head;
	if (i == index)
	{
		if (*head != NULL)
		{
			if (index != 0)
			{
				prev->next = (*head)->next;
			}
			else if (index == 0)
			{
				*head = (*head)->next;
				start = *head;
			}
			bool = 1;
		}
		free(rm);
		rm = NULL;
		*head = start;
	}
	return (bool);
}
