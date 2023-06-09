#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: -> head of the listint_t list.
 *
 * Return: if empty (0).| The head node's data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int result;

if (*head == NULL)
{
return (0);
}

temp = *head;
result = (*head)->n;
*head = (*head)->next;

free(temp);

return (result);
}
