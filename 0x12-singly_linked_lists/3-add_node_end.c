
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - latest node end of linked list
 * @head: Dou pointer to the list_t list
 * @str: string to put in the latest node
 *
 * Return: pointer to latest or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *latest;
list_t *temporary = *head;
unsigned int len = 0;

while (str[len])
{
len++;
}

latest = malloc(sizeof(list_t));
if (!latest)
{
return (NULL);
}

latest->str = strdup(str);
latest->len = len;
latest->next = NULL;

if (*head == NULL)
{
*head = latest;
return (latest);
}

while (temporary->next)
{
temporary = temporary->next;
}

temporary->next = latest;

return (latest);
}

