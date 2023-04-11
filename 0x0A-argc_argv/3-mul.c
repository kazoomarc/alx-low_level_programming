#include<stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two args
 * @argc: argv count
 * @argv: array of args
 *
 * Return: 0 (Success) ; 1 (Error)
 */

int main(int argc, char *argv[])
{
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
}


printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
return (0);



}
