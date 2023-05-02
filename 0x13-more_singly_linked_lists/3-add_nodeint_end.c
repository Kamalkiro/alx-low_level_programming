#include "lists.h"
/**
 * add_nodeint_end - adding node at end
 * @head: pointer
 * @n: node
 * Return: pointing new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x, *y; /* pointers */

	x = malloc(sizeof(listint_t)); /* memory allocation */
	if (!x)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (!*head)
		*head = x;
	else
	{
		y = *head;

		while (y->next)
			y = y->next;
		y->next = x;
	}
	return (x);
}
