#include "main.h"
/**
 *more_numbers - print 10 lines
 *
 */
void more_numbers(void)
{
int times = 0;
while (times < 10)
{
int num = 0;
while (num <= 14)
{
if (num >= 10)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
num++;
}
_putchar('\n');
times++;
}
}

