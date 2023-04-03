
#include "main.h"
/**
 * 
 * _strspn - gets the length of prefix substring of values in accept
 * 
 * @s: string s to find the the length of substring
 * 
 * @accept: string to use for comparison
 * Return:0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
length++;
break;
}
else if (accept[i + 1] == '\0')
return (length);
}
s++;
}
return (length);
}

