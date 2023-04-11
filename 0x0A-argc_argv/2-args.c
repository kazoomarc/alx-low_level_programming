#include <stdio.h>
#include "main.h"

/**
 * main - print argc values
 * @argc: arguments counter
 * @argv: arg array
 *
 * Return:0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
