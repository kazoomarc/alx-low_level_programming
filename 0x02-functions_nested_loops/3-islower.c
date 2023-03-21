#include "main.h"
/**
 *_islower - checks if character is of lower case type
 *
 *@c: the variable character to be cheked
 *
 *Return: 0 (success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
