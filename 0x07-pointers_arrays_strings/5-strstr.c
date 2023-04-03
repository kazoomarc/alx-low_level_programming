#include "main.h"
/**
 * _strstr - finds a needle in haystack
 * @haystack: haystack to find the needle
 * @needle: argument to be found
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;

while (*h == *n && *h != '\0')
{
h++;
n++;
}

if (*n == '\0')
return (haystack);

}

return (0);
}


