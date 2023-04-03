#include "lists.h"

/**
*add_node- create and appends a new node to a list
*@head: Address of pointer to list
*@str: string-  value stored at the new node
*
*Return: list_t. Address of the newly created node
*/
list_t *add_node(list_t **head, const char *str_)
{
	list_t *node = malloc(sizeof(list_t));

	if (node != NULL)
	{
		node->str = strdup(str_);
		node->len = strlen(str_);
		node->next = *head;
		*head = node;
	}
	return (node);
}
