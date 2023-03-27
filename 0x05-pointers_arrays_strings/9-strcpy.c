#include "main.h"
/**
 * _strcpy - copy src to dest
 * @dest: output string
 * @src: input string
 *Return: destination of file
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
