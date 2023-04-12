#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concertenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string1 + string2
 */
char *str_concat(char *s1, char *s2)
{
char *output;
int i, ci;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
i = ci = 0;
while (s1[i] != '\0')
{
i++;
}
while (s2[ci] != '\0')
{
ci++;
}
output = malloc(sizeof(char) * (i + ci + 1));
if (output == NULL)
{
return (NULL);
}
i = ci = 0;
while (s1[i] != '\0')
{
output[i] = s1[i];
i++;
}
while (s2[ci] != '\0')
{
output[i] = s2[ci];
i++, ci++;
}
output[i] = '\0';
return (output);
}
