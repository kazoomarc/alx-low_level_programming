#include "main.h"
/**
 *print_line - print a line in terminal
 *
 *@n: number of times
 */
void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
