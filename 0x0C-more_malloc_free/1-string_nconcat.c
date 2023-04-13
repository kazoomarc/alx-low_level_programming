#include "main.h"

/**
 * string_nconcat - adds two strings
 * @s1: string1
 * @s2: string2
 * @n: indexx
 * Return: char* pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *point;
unsigned int space = 0, space2 = 0, j;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[space] != '\0')
{
space++;
}

while (s2[space2] != '\0')
{
space2++;
}

if (n > space2)
{
n = space2;
}
point = malloc((space + n + 1) * sizeof(char));

if (point == NULL)
{
return (0);
}

for (j = 0; j < space; j++)
{
point[j] = s1[j];
}

for (; j < (space + n); j++)
{
point[j] = s2[j - space];
}
point[j] = '\0';

return (point);
}
