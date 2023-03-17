#include <stdio.h>
/**
*main - prints all numbers less than 10
*
*Return: 0 (success)
*/
int main(void)
{
int number;
number = 0;
while (number < 10)
{
putchar(number + '0');
number++;
}
putchar('\n');
return (0);
}
