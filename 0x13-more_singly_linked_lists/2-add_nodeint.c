#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The integer value to be added as the data for the new node.
 *
 * Return: The address of the new element (the newly added node),
 *         or NULL if memory allocation fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;  /* Pointer to the new node */

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));

    /* Check if memory allocation was successful */
    if (new_node == NULL)
        return (NULL);

    /* Set the data for the new node */
    new_node->n = n;

    /* Make the new node point to the current head of the list */
    new_node->next = *head;

    /* Update the head pointer to the new node */
    *head = new_node;

    return (new_node);
}

