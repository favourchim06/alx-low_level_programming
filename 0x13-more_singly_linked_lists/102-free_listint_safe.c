#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0; /* Counter for the number of nodes */
    listint_t *current, *temp;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;

    while (current != NULL)
    {
        count++;
        temp = current;
        current = current->next;
        free(temp);

        /* Check for a loop in the linked list */
        if (temp->next >= temp)
        {
            *h = NULL; /* Set the head to NULL */
            break; /* Detected a loop, exit the loop */
        }
    }

    *h = NULL; /* Set the head to NULL */

    return (count);
}

