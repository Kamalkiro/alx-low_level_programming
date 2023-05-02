#include "lists.h"
/**
 * listint_len - returning number of elements
 * @h: list
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	size_t y;

	for (y = 0; h != NULL; )
	{
		y += 1;
		h = h->next;
	}
	return (y);
}
