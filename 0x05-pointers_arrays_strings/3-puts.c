#include "main.h"
/**
 * _puts - prints string
 * @str: the string input pointer
 * Return: Nothing
*/

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
