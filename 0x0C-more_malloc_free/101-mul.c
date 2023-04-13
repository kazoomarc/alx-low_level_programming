#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_int - boolean for is it a valid number
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_int(char *s)
{
int j = 0;

while (s[j])
{
if (s[j] < '0' || s[j] > '9')
{
return (0);
}
j++;
}
return (1);
}

/**
 * _strlen - length of string
 * @s: string input
 * Return: length of str
 */
int _strlen(char *s)
{
int j = 0;

while (s[j] != '\0')
{
j++;
}

return (j);
}

/**
 * onError - handles exceptions
 */
void onError(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - num1 * num2
 * @argc: arrgv count
 * @argv: array vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int length1, length2, len, i, take, numberr, numberr2, *output, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_int(s1) || !is_int(s2))
{
onError();
}
length1 = _strlen(s1);
length2 = _strlen(s2);
len = length1 + length2 + 1;
output = malloc(sizeof(int) * len);
if (!output)
{
return (1);
}
for (i = 0; i <= length1 + length2; i++)
{
output[i] = 0;
}
for (length1 = length1 - 1; length1 >= 0; length1--)
{
numberr = s1[length1] - '0';
take = 0;
for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
{
numberr2 = s2[length2] - '0';
take += output[length1 + length2 + 1] + (numberr * numberr2);
output[length1 + length2 + 1] = take % 10;
take /= 10;
}
if (take > 0)
{
output[length1 + length2 + 1] += take;
}
}
for (i = 0; i < len - 1; i++)
{
if (output[i])
{
a = 1;
}
if (a)
{
_putchar(output[i] + '0');
}
}
if (!a)
{
_putchar('0');
}
_putchar('\n');
free(output);
return (0);
}


