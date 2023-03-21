#include "main.h"
/**
 *_isalpha - checks if a character is an alphabetic character
 *
 *@c: contains character to be checked
 *
 *Return: 0 on success
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
