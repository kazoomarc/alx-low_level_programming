#include "main.h"
/**
 * _memcpy - fills memory with char b
 * @dest: memory areas to be filled
 * @src:the source of the value to fill dest with
 * @n:number of bytes to be filled
 *
 * Return: dest memory location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int *location;
location = *dest;

while (n--)
{
*location++ = *src++;
}
return (dest);
}
