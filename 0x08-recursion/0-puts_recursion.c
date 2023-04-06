#include "main.h"

/**
 * _puts_recursion - works as a built in puts fnct
 * @s: input string
 * Return - Nothing
*/

void _puts_recursion(char *s)
{
if (s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
