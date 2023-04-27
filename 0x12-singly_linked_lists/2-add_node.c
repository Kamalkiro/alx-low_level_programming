#include "lists.h"
int _strlen(char *s);
/**
 * add_node - adding node
 * @head: poinet
 * @str: nodes
 * Return: node added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);
	if (node == NULL)
		return (NULL);
	if (str != NULL)
	{
		node->str = strdup(str);
		if (!node->str)
		{
			free(node);
			return (NULL);
		}
		node->len = _strlen(node->str);
	}

	node->next = *head;
	*head = node;
	return (node);
}
