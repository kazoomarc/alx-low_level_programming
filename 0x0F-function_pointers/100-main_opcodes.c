#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: argv
 * @argv: arryay of argc
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int bytess, i;
char *arry;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytess = atoi(argv[1]);

if (bytess < 0)
{
printf("Error\n");
exit(2);
}

arry = (char *)main;

for (i = 0; i < bytess; i++)
{
if (i == bytess - 1)
{
printf("%02hhx\n", arry[i]);
break;
}
printf("%02hhx ", arry[i]);
}
return (0);
}

