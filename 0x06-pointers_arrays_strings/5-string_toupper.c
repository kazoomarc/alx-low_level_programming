#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *string_toupper - capitalize string
 * @str: tinput to capitalize
 *Return: str (success)
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
str[i] = toupper(str[i]);
i++;
}
return (str);
}
