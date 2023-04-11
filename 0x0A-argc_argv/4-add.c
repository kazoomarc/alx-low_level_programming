#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * main - Print the name of the program
 * @argc: argv count
 * @argv: input args
 *
 * Return:0 (Success)
 */

int main(int argc, char *argv[])
{
int sum = 0;
if (argc < 1)
{
printf("0");
}
else
{
int i;
for (i = 1; i < argc; i++)
{
int n;
if (sscanf(argv[i], "%d", &n) != 1)
{
printf("Error\n");
return (1);
break;
}
sum = sum + n;
}
if (i == argc)
{
printf("%d\n", sum);
}
}
return (0);
}
