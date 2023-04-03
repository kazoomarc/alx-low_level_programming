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
int i, j;
i = 0;
j = n;
while (j--)
{
dest[i] = src[i];
i++;
}
return (dest);
}
