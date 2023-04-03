#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s.
 * @s: string to be searched for accept
 * @accept: strind required
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return ('\0');
}


