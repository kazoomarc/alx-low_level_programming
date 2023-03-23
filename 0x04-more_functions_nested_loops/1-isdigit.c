#include "main.h"

/**
 *_isdigit - tests if char is uppercase
 *
 * @c: the character to be tested
 * Return: 0 if not digit and 1 if is digit
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
