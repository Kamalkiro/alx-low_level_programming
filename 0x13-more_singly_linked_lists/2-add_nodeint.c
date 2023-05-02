#include "lists.h"
/**
 * add_nodeint - adding a new node in beggining
 * @head: pointer
 * @n: node
 * Return: points to head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *z;

	z = malloc(sizeof(listint_t));
	if (!z)
		return (NULL);

	z->n = n;
	z->next = *head;
	*head = z;

	return (z);
}
