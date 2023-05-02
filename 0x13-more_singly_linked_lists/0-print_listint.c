#include "lists.h"
/**
 * print_listint - printing elements of linked lists
 * @h: list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
