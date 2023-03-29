#include "main.h"
#include<string.h>
/**
 **_strncpy - joins string dest and src
 *
 * @dest: destination of the string
 * @src: source of the string
 * @n: cutoff number
 * Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}

