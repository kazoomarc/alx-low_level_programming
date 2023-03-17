#include <stdio.h>
/**
*main - numbers less than 10 separated by commas
*
*Return: 0 on success
*/
int main(void)
{
int number;
number = 0;
while (number < 10)
{
putchar(number + '0');
if (number < 9)
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
number++;
}
return (0);
}
