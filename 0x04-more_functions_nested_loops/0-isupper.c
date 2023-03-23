#include "main.h"

/**
 *_isupper - tests if char is uppercase
 *
 * @c: the character to be tested
 * Return: 0if not upper and 1 if upper
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
