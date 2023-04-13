#include "main.h"

/**
 *_calloc - allocats memory for nmeb 2 size bytes
 *@nmemb: array length
 *@size: bytes each in array
 *Return: pointer void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *point;
unsigned int j;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

point = malloc(nmemb * size);
if (point == NULL)
{
return (NULL);
}

for (j = 0; j < nmemb * size; j++)
{
point[i] = 0;
}

return (point);

}
