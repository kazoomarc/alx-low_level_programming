#include <string.h>
#include "main.h"
/**
 *puts_half - cuts the string half
 *@str: pointer to the string
 */
void puts_half(char *str)
{
int len = strlen(str);
int j = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;
int i;
for (i = j; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
