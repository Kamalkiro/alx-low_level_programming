#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head)
	{
		return NULL;
	}
	if (!*head)
	{
		new->next = NULL;
		new->n = n;
		*head = new;
	}
	else
	{	
		while ((*head)->prev)
		{
			*head = (*head)->prev;
		}
		(*head)->prev = new;
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return new;
}
size_t print_dlistint(const dlistint_t *h)
{
	int ret = 0;

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
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
