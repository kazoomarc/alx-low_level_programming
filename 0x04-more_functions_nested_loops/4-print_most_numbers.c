#include "main.h"

/**
 * print_most_numbers - multiply two ints a & b
 *
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
putchar('0' + i);
}
}
putchar('\n');
return;
}
