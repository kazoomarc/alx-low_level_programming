#include<stdio.h>
/**
 * main - print argc values
 * @argc: arguments counter
 * @argv: arg array
 *
 * Return:0 (Success)
 */

int main(int argc, char* argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}

