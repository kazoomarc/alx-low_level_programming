#include <stdio.h>
/**
*main - prints numbers less than 10
*
*Return: 0 (success)
*/
int main(void)
{
int num;
num = 0;
while (num < 10)
{
printf(num);
num++;
}
putchar('\n');
return (0);
}
