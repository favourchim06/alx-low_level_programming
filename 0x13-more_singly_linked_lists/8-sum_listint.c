#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all the data in the linked list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
    int sum = 0; /* Variable to store the sum */

    /* Traverse the linked list and add each data value to the sum */
    while (head != NULL)
    {
        sum += head->n;
        head = head->next;
    }

    return (sum);
}

