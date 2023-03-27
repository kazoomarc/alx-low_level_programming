#include "main.h"
/**
 * _strlen - meaning
 *
 * @s: char stream to be counted
 *Return: length of  string
*/

int _strlen(char *s)
{

int length = 0;
while (*s != '\0')
{
length++;
s++;
}

return (length);
}
