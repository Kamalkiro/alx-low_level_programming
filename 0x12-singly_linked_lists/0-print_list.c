#include "lists.h"
/**
 * _strlen - length
 * @string: string
 * Return: length
 */
int _strlen(char *string)
{
	int x;

	if (string == NULL)
	{
		return (0);
	}
	for (x = 0; *string++; )
		x++;
	return (x);
}
/**
 * print_list - printing linked list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
