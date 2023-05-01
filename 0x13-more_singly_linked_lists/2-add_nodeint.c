#include "lists.h"

/**
 * add_nodeint - latestnode -> beginning of a list.
 * @head: -> to the address of the head of the list.
 * @n: The integer for the latest node to contain.
 * Return: fail (NULL). the address of the latest element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *latest;

latest = malloc(sizeof(listint_t));
if (latest == NULL)
{
return (NULL);
}

latest->n = n;
latest->next = *head;

*head = latest;

return (latest);
}
