#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - new memlocation
 * @str: string input
 * Return: 0 (success)
 */

char *_strdup(char *str)
{

char *out;
int i, r = 0;

if (str == NULL)
{
return (NULL);
}

i = 0;
while (str[i] != '\0')
{
i++;
}

out = malloc(sizeof(char) * (i + 1));

if (out == NULL)
{
return (NULL);
}


for (r = 0; str[r]; r++)
{
out[r] = str[r];
}


return (out);
}

