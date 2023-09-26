#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list (if it exists).
 * @head: A pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow, *fast;

    if (head == NULL || head->next == NULL)
        return (NULL);

    slow = head->next;
    fast = head->next->next;

    while (fast != NULL)
    {
        if (slow == fast)
        {
            slow = head;

            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            return (slow);
        }

        slow = slow->next;
        fast = fast->next;

        if (fast != NULL)
            fast = fast->next;
        else
            return (NULL);
    }

    return (NULL);
}

