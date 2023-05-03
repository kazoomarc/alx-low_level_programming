#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Count no. of unique nodes
 *in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: the number of unique nodes in the list. Not looped (0)
 */
size_t looped_listint_count(listint_t *head)
{
listint_t *turtle, *snake;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
{
return (0);
}

turtle = head->next;
snake = (head->next)->next;

while (snake)
{
if (turtle == snake)
{
turtle = head;
while (turtle != snake)
{
nodes++;
turtle = turtle->next;
snake = snake->next;
}

turtle = turtle->next;
while (turtle != snake)
{
nodes++;
turtle = turtle->next;
}

return (nodes);
}

turtle = turtle->next;
snake = (snake->next)->next;
}

return (0);
}

/**
 * free_listint_safe - Frees list safely sets the head to NULL.
 * @h: -> the head of the listint_t list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
size_t nodes, j;

nodes = looped_listint_count(*h);

if (nodes == 0)
{
for (; h != NULL && *h != NULL; nodes++)
{
temp = (*h)->next;
free(*h);
*h = temp;
}
}

else
{
for (j = 0; j < nodes; j++)
{
temp = (*h)->next;
free(*h);
*h = temp;
}

*h = NULL;
}

h = NULL;

return (nodes);
}
