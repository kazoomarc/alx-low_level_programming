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
int i;
for (i = 0; i < n && i != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}

