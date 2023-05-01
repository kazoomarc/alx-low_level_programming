#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped linked list.
 * @head: -> the head of the listint_t to check.
 *
 * Return: the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *turtle, *snake;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
        {return (0);}

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
 * print_listint_safe - Prints a listint_t list safely.
 * @head: -> the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
