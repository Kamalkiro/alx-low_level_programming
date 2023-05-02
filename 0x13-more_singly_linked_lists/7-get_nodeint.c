#include "lists.h"
/**
 * get_nodeint_at_index - returning nth node
 * @head: pointer
 * @index: index of node
 * Return: node adress
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (n = head, i = 0; n && i < index; n = n->next, i++)
		;
	if (i == index)
		return (head);
	return (n);
}
