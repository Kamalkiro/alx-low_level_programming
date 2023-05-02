#include "lists.h"
/**
 * sum_listint - returning sum of all
 * @head: pointer
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int i;

	for (i = 0; head != NULL; )
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
