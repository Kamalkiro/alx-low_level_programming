#include "lists.h"
/**
 * free_listint - freeing list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *x;

	for (; head != NULL; )
	{
		x = head;
		head = head->next;
		free(x);
	}
}
