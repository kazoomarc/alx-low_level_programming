#include "main.h"
/**
 *print_triangle - prints triangle
 *
 * @magnitude: has the magnitude of traingle
 */
void print_triangle(int magnitude)
{
int i, j;

if (magnitude <= 0)
{
_putchar('\n');
return;

}
for (i = 1; i <= magnitude; i++)
{
for (j = 1; j <= i; j++)
{
_putchar('#');
}

_putchar('\n');
}
}
