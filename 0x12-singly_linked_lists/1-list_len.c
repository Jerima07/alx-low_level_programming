#include "lists.h"

/**
 * list_len -prints number of elements in a linked list
 * @h: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t elems;

	elems = 0;
	while (h != NULL)
	{
		h = h->next;
		elems++;
	}
	return (elems);
}
