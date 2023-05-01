#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints ALL elements of alist.
 * @h: -> head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
size_t nodecount = 0;

while (h)
{
nodecount++;
printf("%d\n", h->n);
h = h->next;
}

return (nodecount);
}
