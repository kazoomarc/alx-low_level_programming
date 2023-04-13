#include "main.h"

/**
 *malloc_checked - returns pointer to arra
 *@b: Amount of memory to be allocated
 *Return: void
 */

void *malloc_checked(unsigned int b)
{
void *point;

point = malloc(b);
if (point == NULL)
{
exit(98);
}

return (point);
}
