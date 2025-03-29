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
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    node->next = add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint_safe(head);
    return (0);
}
size_t print_listint_safe(const listint_t *head)
{
	size_t x, j = 0, max = 0, maxxine = 0, flag = 0;
	long int l;
    void *ptr;
    int store;
    const listint_t *cp = head, *helper = head;

    helper = helper->next;
    while (cp && max < 200)
    {
        helper = cp->next;
        maxxine = 0;
        while (helper && maxxine < 200)
        {
            if (helper == cp)
            {
                j++;
                break;
            }
            helper = helper->next;
            maxxine++;
        }
        cp = cp->next;
        max++;
    }

	for (x = 0; head != NULL; x++)
	{
		l = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (l > 0)
			head = head->next;
		else if (l <= 0 && j > 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
            x++;
			break;
		}
        else
        {
            store = head->next->n;
            ptr = (void *)head->next;
            flag++;
            head = head->next;
        }
	}
    if (flag > 0)
    {
        printf("-> [%p] %d\n", ptr, store);
    }
	return (x);
}