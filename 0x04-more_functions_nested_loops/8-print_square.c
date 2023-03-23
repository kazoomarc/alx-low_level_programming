#include "main.h"
/**
 * print_square - prints a square of magnitude "magnitude"
 *
 * @magnitude: the magnitude of the square
 */
void print_square(int magnitude)
{
int i;
int j;
if (magnitude <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < magnitude; i++)
{
for (j = 0; j < magnitude; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
