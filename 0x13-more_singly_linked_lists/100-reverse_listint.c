#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL; /* Pointer to the previous node */
    listint_t *current = *head; /* Pointer to the current node */
    listint_t *next = NULL; /* Pointer to the next node */

    while (current != NULL)
    {
        next = current->next; /* Store the address of the next node */
        current->next = prev; /* Reverse the link of the current node */

        prev = current; /* Move the previous pointer forward */
        current = next; /* Move the current pointer forward */
    }

    *head = prev; /* Update the head to point to the new first node (last node of the original list) */

    return (*head);
}

