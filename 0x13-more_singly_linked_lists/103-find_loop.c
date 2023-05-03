#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a linked list.
 * @head: -> the head of the listint_t list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *turtle, *snake;

if (head == NULL || head->next == NULL)
{
return (NULL);
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
turtle = turtle->next;
snake = snake->next;
}

return (turtle);
}

turtle = turtle->next;
snake = (snake->next)->next;
}

return (NULL);
}
