#include "lists.h"
/**
 * free_listint_safe - freeing a linked list
 * @h: pointer
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *t;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
