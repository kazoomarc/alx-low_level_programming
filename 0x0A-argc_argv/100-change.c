#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints change minimum
 * @argc: argv count
 * @argv: arr of args
 *
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
int number
int i
int output;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

number = atoi(argv[1]);
output = 0;

if (number < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < 5 && number >= 0; i++)
{
while (number >= coins[i])
{
output++;
number -= coins[i];
}
}

printf("%d\n", output);
return (0);
}

