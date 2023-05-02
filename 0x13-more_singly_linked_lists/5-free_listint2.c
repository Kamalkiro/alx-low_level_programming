#include "lists.h"
/**
 * free_listint2 - freeing list
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *x, *y;

	if (head == NULL)
		return;
	x = *head;
	for (; x != NULL; )
	{
		y = x;
		x = x->next;
		free(y);
	}
	*head = NULL;
}
