#include "lists.h"

/**
*sum_listint - adds the values stored in each node
*@head: A pointer to the first node
*
*Return: int. The sum of all the values in the linkedlist
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
