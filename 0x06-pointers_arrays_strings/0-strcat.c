#include "main.h"
#include<string.h>

/**
 **_strcat - joins string dest and src
 *
 * @dest: destination of the string
 * @src: source of the string
 *
 * Return: char
*/

char *_strcat(char *dest, char *src)
{

size_t dest_len = strlen(dest);
size_t src_len = strlen(src);
size_t i;

for (i = 0; i < (src_len) && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';

return (dest);

}


