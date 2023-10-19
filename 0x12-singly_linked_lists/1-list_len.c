#include "lists.h"

/**
*list_len - This returns the number of elements in a linked list
*@h: The pointer to the list_t list
*Return: The number of elements in h
*/

size_t list_len(const list_t *h)
{
	size_t q = 0;

	while (h)
	{
	q++;
	h = h->next;
	}
	return (q);
}
