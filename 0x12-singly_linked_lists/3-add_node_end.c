#include "lists.h"
int _strlen(char *s);
/**
 * add_node_end - adds node in end
 * @head: pointer
 * @str: node
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *end = *head;

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
	if (end != NULL)
	{
		while (end->next)
			end = end->next;
		end->next = node;
	}
	else
		*head = node;
	return (node);
}
