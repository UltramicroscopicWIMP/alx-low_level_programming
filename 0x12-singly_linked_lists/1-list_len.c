#include "lists.h"

/**
 *list_len- Counts the number of nodes in a singly linked list
 *@h: Pointer to the linked list
 *
 *Return: size_t. The number of nodes in the linked list
 */
size_t list_len(const list_t *h)
{
  size_t count = 0;

  while (h != NULL)
    {
      h = h->next;
      count++;
    }
  return (count);
}
