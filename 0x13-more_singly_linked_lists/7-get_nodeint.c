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

	while (i && i < index)
	{
		n = n->next;
		i++;
	}
	return (n);
}
