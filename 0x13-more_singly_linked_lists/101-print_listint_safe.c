#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head; /* Pointer to the current node */
    size_t count = 0; /* Counter for the number of nodes */

    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;

        /* Check for a loop in the linked list */
        if (current->next >= current)
        {
            printf("-> [%p] %d\n", (void *)current->next, current->next->n);
            break; /* Detected a loop, exit the loop */
        }

        current = current->next; /* Move to the next node */
    }

    return (count);
}

