#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return node count
 * @h: -> head of the listint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
size_t nodecount = 0;

while (h)
{
nodecount++;
h = h->next;
}

return (nodecount);
}
