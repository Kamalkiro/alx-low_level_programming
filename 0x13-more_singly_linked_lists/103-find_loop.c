#include "lists.h"
/**
 * find_listint_loop - finding loop
 * @head: pointer to list
 * Return: pointer to first
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *point, *fin;

	if (!head)
		return (NULL);
	for (fin = head->next; fin; fin = fin->next)
	{
		if (fin == fin->next)
			return (fin);
		for (point = head; point != fin; point = point->next)
			if (point == fin->next)
				return (fin->next);
	}
	return (NULL);
}
