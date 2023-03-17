#include <stdio.h>
/**
*main - base 16 numbers printer
*
*Return: 0 (success)
*/
int main(void)
{
int number;
number = 0;
while (number <= 15)
{
if (number < 10)
putchar(number + '0');
else
putchar((number - 10) + 'a');
number++;
}
putchar('\n');
return (0);
}
