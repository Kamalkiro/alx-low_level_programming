#include "lists.h"
/**
 * list_len - returning nb of elements in list
 * @h: pointer
 * Return: nb
 */
size_t list_len(const list_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
