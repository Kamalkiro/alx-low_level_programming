#include "lists.h"
/**
 * insert_nodeint_at_index - printing new node
 * @head: pointer
 * @idx: index
 * @n: new node
 * Return: address or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *node, *y;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	y = *head;
	while (x < (idx - 1))
	{
		y = y->next;
		x++;
		if (!y)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = y->next;
	y->next = node;
	return (node);
}
