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
    int n;

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
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new = malloc(sizeof(new)), *tmp = *head;
    if (!head)
        return NULL;
    new->n = n;
    if(*head)
    {
        while(tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
    }
    else
        *head = new;
    return(new);
}
void free_listint2(listint_t **head)
{
    listint_t *tmp = NULL;
    if (!*head)
    {
        return;
    }
    while(*head)
    {
        tmp = (**head).next;
        free(*head);
        *head = tmp;
    }
    head = NULL;
}
int pop_listint(listint_t **head)
{
    int data;
    listint_t *ptr = *head;

    if(!head || !*head)
        return 0;
    data = ptr->n;
    if (ptr->next)
    {
        *head = ptr->next;
        free(ptr);
    }
    return (data);
}