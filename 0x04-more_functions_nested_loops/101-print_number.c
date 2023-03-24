#include "main.h"

/**
 * print_number - prints integers inserted
 * @n: variable to be printed
 *
*/

void print_number(int n)
{
int digits[10];
int i, j;

if (n == 0)
{
putchar('0');
return;
}

if (n < 0)
{
putchar('-');
n = -n;
}

i = 0;
while (n > 0)
{
digits[i] = n % 10;
n /= 10;
i++;
}

for (j = i - 1; j >= 0; j--)
{
putchar(digits[j] + '0');
}
}
