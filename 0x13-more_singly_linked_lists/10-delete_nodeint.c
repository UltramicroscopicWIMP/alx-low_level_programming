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
	int bool i;
	listint_t *rm, *start;

	i = 0;
	bool = -1;
	start = *head;
	while (i <= index)
	{
		if (*head == NULL)
			break;
		*head = (*head)->next;
		i++;
	}
	if (start != NULL && i == index + 1)
	{
		rm = *head;
		*head = (*head)->next;
		free(rm);
		rm = NULL;
		bool = 1;
	}
	*head = start;
	return (bool);
}
