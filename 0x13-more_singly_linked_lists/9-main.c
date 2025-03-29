#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("-----------------\n");
    insert_nodeint_at_index(&head, 0, 4096);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    int i = 0, index = idx - 1;
    listint_t *new = malloc(sizeof(new)), *tmp = *head;
    
    while (i < index)
    {
        if (tmp->next || tmp)
            tmp = tmp->next;
        if (!tmp)
            return(NULL);
        i++;
    }
    new->n = n;
    
    if (idx == 0)
    {
        new->next = tmp;
        *head = new;
    }
    else
    {    
        new->next = tmp->next;
        tmp->next = new;
    }
    return (new);
}