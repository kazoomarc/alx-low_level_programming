#include <stdlib.h>
#include "lists.h"

/**
 * list_len - list length
 * @h: pointer to the list_t list
 *
 * Return: j (list len)
 */
size_t list_len(const list_t *h)
{
size_t j = 0;

while (h)
{
j++;
h = h->next;
}
return (j);
}

