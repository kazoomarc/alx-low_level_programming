#include "main.h"

/**
 *print_diagonal - print diagonal vertices
 *
 *@n: maximum times the line should be printed
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
