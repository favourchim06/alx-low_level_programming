#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: A pointer to the head of the linked list to be freed.
 */
void free_listint(listint_t *head)
{
    listint_t *current; /* Pointer to traverse the list */

    /* Traverse the list and free each node */
    while (head != NULL)
    {
        current = head;
        head = head->next; /* Move to the next node */
        free(current);     /* Free the current node */
    }
}

