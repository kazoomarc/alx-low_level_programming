#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * cap_string - Capitalize first letter of each word
 * @str: input string
 * Return: str
 */
char *cap_string(char *str)
{
int i;
int len = strlen(str);
if (len > 0 && islower(str[0]))
{
str[0] = toupper(str[0]);
}
for (i = 1; i < len; i++)
{
if (str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n' || str[i - 1] == ',' ||
str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' ||
str[i - 1] == '"' || str[i - 1] == '(' ||
str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
{
if (islower(str[i]))
{
str[i] = toupper(str[i]);
}
}
}
return (str);
}
