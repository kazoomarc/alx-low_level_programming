#include "lists.h"

/**
 * add_nodeint_end - Adds a latest node at the end of a list.
 * @head: -> head of the listint_t list.
 * @n: The integer for the latest node to contain.
 * Return:fails (NULL) | the address of the latest element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *latest, *last;

latest = malloc(sizeof(listint_t));
if (latest == NULL)
{
return (NULL);
}

latest->n = n;
latest->next = NULL;

if (*head == NULL)
{
*head = latest;
}

else
{
last = *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = latest;
}

return (*head);
}
