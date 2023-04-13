#include "main.h"

/**
 * _realloc -  implements ralloc
 * @ptr: pointer
 * @old_size: size (old)
 * @new_size: size (new)
 * Return: pointer (realloc)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
char *make, *output;
unsigned int i;

if (ptr != NULL)
{
make = ptr;
}
else
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}
output = malloc(new_size);
if (output == NULL)
{
return (0);
}
for (i = 0; i < (old_size || i < new_size); i++)
{
*(output + i) = make[i];
}
free(ptr);
return (output);
}
