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
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
void free_list(list_t *head)
{
    int count = 0, i = 0;
    list_t *scroll = head;
    if (head)
    {
        while(scroll)
        {
            free(scroll->str);
            scroll = scroll->next;
            count++;
        }
    }
    list_t *temp = head;
    while(i < count)
    {
        scroll = head->next;
        free(head->next);
        head = scroll;
        i++;
    }
    free(temp);
}