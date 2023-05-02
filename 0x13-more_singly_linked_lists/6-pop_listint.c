#include "lists.h"
/**
 * pop_listint - deleting head node
 * @head: pointer
 * Return: data of node
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (head == NULL || *head == NULL)
		return (0);
	p = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = p;
	return (i);
}
