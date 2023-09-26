#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be added as the data for the new node.
 *
 * Return: The address of the new element (the newly added node),
 *         or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;  /* Pointer to the new node */
    listint_t *current;   /* Pointer to traverse the list */

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));

    /* Check if memory allocation was successful */
    if (new_node == NULL)
        return (NULL);

    /* Set the data for the new node */
    new_node->n = n;
    new_node->next = NULL; /* New node is the last node, so next is NULL */

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        current = *head;

        /* Traverse the list to find the last node */
        while (current->next != NULL)
        {
            current = current->next;
        }

        /* Set the next of the last node to the new node */
        current->next = new_node;
    }

    return (new_node);
}

