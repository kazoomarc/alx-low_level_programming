#include "main.h"
#include <stdlib.h>

/**
 * create_array - array size = size ; fill array with c
 * @size: arr size
 * @c: fill arr[i] with
 * Return: output || NULL(if size == 0)
 *
 */

char *create_array(unsigned int size, char c)

{

char *output;

unsigned int i;
output = malloc(sizeof(char) * size);

if (size == 0 || output == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
output[i] = c;
}

return (output);
}

