#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int i = 0;
	dlistint_t *tmp;

	if (!(*head) || index < 0 || !head)
		return -1;
	while ((*head)->prev)
	{
		(*head) = (*head)->prev;
	}
	if (index != 0)
	{	
		while (i < index - 1)
		{
			if (*head)
				*head = (*head)->next;
			else
				return -1;
			i++;
		}
	}
	if (index == 0)
	{
		if (*head)
		{
			if ((*head)->next)
				tmp = ((*head)->next);
			else
				tmp = NULL;
			if (*head)
			{
				free(*head);
				*head = NULL;
			}
			if (tmp != NULL)
			{
				*head = tmp;
				(*head)->prev = NULL;
			}
			else if (*head)
				(*head)->next = NULL;
		}
		else 
			return -1;
		return 1;
	}
	else
	{	
		tmp = (*head)->next;
		(*head)->next = ((*head)->next)->next;
		free(tmp);
		tmp = *head;
		*head = (*head)->next;
		(*head)->prev = tmp;
	}
	return 1;
}
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

	if (!h)
		return 0;
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
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}