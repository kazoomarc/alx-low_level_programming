#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - memory alloc
 * @nmemb: entered int
 * @size: Array size
 * Return: pointer
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *point = malloc(nmemb * size);
if (point != NULL)
{
unsigned int i;
for (i = 0; i < nmemb * size; i++)
{
*((char *) point + i) = 0;
}
}
return (point);
}
