#include <stdio.h>
/**
* main - printer for two combination number
*
* Return: 0 (success)
*/
int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
if (i != 0 || j != 0)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}

