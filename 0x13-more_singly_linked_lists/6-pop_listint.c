#include "lists.h"

/**
*pop_listint - deletes the first node
*@head: The address of the pointer to the first node
*
*Return: Integer. Returns the value stored at the first node
*/
int pop_listint(listint_t **head)
{
	int val;
	listint_t *prev;

	val = 0;
	if (*head != NULL)
	{
		prev = *head;
		val = prev->n;
		*head = (*head)->next;
		free(prev);
		prev = NULL;
	}
	return val;
}
