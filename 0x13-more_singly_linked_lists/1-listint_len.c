#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;  /* Initialize a counter to zero */

    /* Traverse the linked list while h is not NULL (i.e., until the end) */
    while (h != NULL)
    {
        count++;       /* Increment the counter */
        h = h->next;   /* Move to the next node */
    }

    return (count);   /* Return the total count of elements in the list */
}

