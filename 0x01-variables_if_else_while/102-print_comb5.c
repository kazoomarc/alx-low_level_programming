#include <stdio.h>
/**
 *main - 2 digit combinations
 *Return: (success)
 */
int main(void)
{
int number1, number2;
for (number1 = 0; number1 <= 99; number1++)
{
for (number2 = number1; number2 <= 99; number2++)
{
if (number1 / 10 <= number2 / 10 && (number1/10 == 0 && number2 == 0 && (number2 / 10) == 0 && (number2 % 10) == 0))
{
putchar(number1 / 10 + '0');
putchar(number1 % 10 + '0');
putchar(' ');
putchar(number2 / 10 + '0');
putchar(number2 % 10 + '0');
if (number1 != 99 || number2 != 9)
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
