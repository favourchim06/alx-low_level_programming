#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements (nodes) in the list.
 */
size_t list_len(const list_t *h)
{
    size_t node_count = 0;  /* Initialize the node count to 0 */

    while (h != NULL)
    {
        node_count++;  /* Increment the node count */
        h = h->next;   /* Move to the next node */
    }

    return node_count;  /* Return the total number of nodes (elements) */
}
