#include "main.h"

/**
 * print_number - prints integers inserted
 * @n: variable to be printed
 *
*/

void print_number(int n)
{
if (n == 0)
{
_putchar('0');
return;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
int digits[10];
int i = 0;
while (n > 0)
{
digits[i] = n % 10;
n /= 10;
i++;
}
for (int j = i - 1; j >= 0; j--)
{
_putchar(digits[j] + '0');
}
}
