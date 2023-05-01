#include "lists.h"

/**
 * sum_listint - sums ints in all node
 * @head: A pointer to the head of the listint_t list.
 * Return: the result of all the data.
 */
int sum_listint(listint_t *head)
{
int result = 0;

while (head)
{
result += head->n;
head = head->next;
}

return (result);
}
