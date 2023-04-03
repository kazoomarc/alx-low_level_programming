#include "main.h"


/**
 *_strchr - returns a pointer to first occurence of a char c
 *@s: string to be checked for c
 *@c: character to be checked from s
 *Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}

