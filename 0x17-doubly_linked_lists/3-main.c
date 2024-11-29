#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp;

	if (!head)
	{
		return NULL;
	}
	tmp = *head;
	if (!*head)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		*head = new;
	}
	else
	{	
		while ((*head)->next)
		{
			*head = (*head)->next;
		}
		(*head)->next = new;
		new->n = n;
		new->prev = *head;
	}
	return tmp;
}
size_t print_dlistint(const dlistint_t *h)
{
	int ret = 0;

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ret++;
	}
	return ret;
}
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}