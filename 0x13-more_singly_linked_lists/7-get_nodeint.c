#include "lists.h"
/**
 * get_nodeint_at_index - returning nth node
 * @head: pointer
 * @index: index of node
 * Return: node adress
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *point = head;

	while (i < index)
	{
		if (point == NULL)
			return NULL;
		point = point->next;
		i++;
	}

	return (point);
}
