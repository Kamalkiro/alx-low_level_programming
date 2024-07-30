#include "lists.h"
/**
 * print_listint_safe - printing a listint_t linked list.
 * @head: list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x;
	long int l;

	for (x = 0; head != NULL; x++)
	{
		l = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (l > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (x);
}
