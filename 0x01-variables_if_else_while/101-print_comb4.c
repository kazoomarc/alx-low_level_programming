#include <stdio.h>
/**
 *main - combination of 3-digits
 *Return: 0 on success
 */
int main(void)
{
int number1, number2, number3;
int counter = 0;
for (number1 = 0; number1 < 8; number1++)
{
for (number2 = number1 + 1; number2 < 9; number2++)
{
for (number3 = number2 + 1; number3 < 10; number3++)
{
putchar(number1 + '0');
putchar(number2 + '0');
putchar(number3 + '0');
counter++;
if (counter < 120)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
