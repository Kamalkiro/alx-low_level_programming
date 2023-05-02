#include "lists.h"
/**
 * delete_nodeint_at_index - deleting node
 * @head: pointer
 * @index: index to delete node
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *y, *z;

	if (*head == NULL)
		return (-1);
	y = *head;
	if (!index)
	{
		*head = y->next;
		free(y);
		return (1);
	}
	for (x = 0; x < (index - 1) && y; x++)
	{
		y = y->next;
	}
	if (x != (index - 1) || y->next == NULL)
		return (-1);
	z = y->next;
	y->next = (y->next)->next;
	free(z);
	return (1);
}
