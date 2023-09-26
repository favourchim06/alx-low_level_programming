#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp; /* Temporary pointer to the old head node */
    int data;        /* Variable to store the data of the head node */

    /* Check if the list is empty */
    if (*head == NULL)
        return (0);

    /* Store the data of the head node */
    data = (*head)->n;

    /* Store the old head node in temp */
    temp = *head;

    /* Update the head to point to the next node */
    *head = (*head)->next;

    /* Free the old head node */
    free(temp);

    return (data);
}

