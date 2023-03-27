#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: the string input pointer
 * Return: Nothing
*/

void print_rev(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}

s--;
while (length >= 0)
{
_putchar(*s);
length--;
s--;
}

_putchar('\n');
}
