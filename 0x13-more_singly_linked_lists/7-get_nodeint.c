#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to return (starting at 0).
 *
 * Return: The nth node of the linked list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0; /* Variable to keep track of the current index */

    /* Traverse the linked list */
    while (head != NULL)
    {
        /* If the current index matches the desired index, return the node */
        if (count == index)
            return (head);

        /* Move to the next node */
        head = head->next;
        count++;
    }

    /* If the desired index is out of range, return NULL */
    return (NULL);
}

