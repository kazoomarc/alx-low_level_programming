#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at any position
 * @head: -> head of the listint_t list.
 * @idx: The index of for new node
 * @n: The integer for the latest node to contain.
 *
 * Return: fails (NULL) | -> latest node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *latest, *copy = *head;
unsigned int node;

latest = malloc(sizeof(listint_t));
if (latest == NULL)
{
return (NULL);
}

latest->n = n;

if (idx == 0)
{
latest->next = copy;
*head = latest;
return (latest);
}

for (node = 0; node < (idx - 1); node++)
{
if (copy == NULL || copy->next == NULL)
{
return (NULL);
}

copy = copy->next;
}

latest->next = copy->next;
copy->next = latest;

return (latest);
}
