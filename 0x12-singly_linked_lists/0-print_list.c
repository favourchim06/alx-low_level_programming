#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;  /* Initialize the node count to 0 */

    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%u] %s\n", h->len, h->str);
        }
        node_count++;  /* Increment the node count */
        h = h->next;   /* Move to the next node */
    }

    return (node_count);  /* Return the total number of nodes */
}
