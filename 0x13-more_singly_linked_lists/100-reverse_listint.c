#include "lists.h"
/**
 * reverse_listint - reversing a listint_t linked list
 * @head: pointer
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = next;
	}
	(*head) = node;
	return (*head);
}
