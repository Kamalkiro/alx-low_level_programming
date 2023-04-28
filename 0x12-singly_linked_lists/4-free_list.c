#include "lists.h"

/**
 * free_list - frees list
 * @head: pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *node, *nod;

	if (head == NULL)
		return;
	node = head;
	while (node != NULL)
	{
		nod = node->next;
		free(node->str);
		free(node);
		node = nod;
	}
}
