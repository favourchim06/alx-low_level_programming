#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the linked list to be freed.
 */
void free_listint2(listint_t **head)
{
    listint_t *current; /* Pointer to traverse the list */

    /* Check if head is NULL (an empty list) */
    if (head == NULL)
        return;

    /* Traverse the list and free each node */
    while (*head != NULL)
    {
        current = *head;
        *head = (*head)->next; /* Move to the next node */
        free(current);        /* Free the current node */
    }
}

