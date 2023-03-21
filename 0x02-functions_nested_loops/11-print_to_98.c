#include "print_number.c"
#include "main.h"
#include<stdio.h>
#include<unistd.h>
/**
 *print_to_98 - prints to 98
 *print_number - it does the format printing
 *@num: has number to be checked
 *
 *Return: 0 (success)
 */


if (num / 10)
{
print_number(num / 10);
}
_putchar(num % 10 + '0');

}

void print_to_98(int n)
{
int start = n;

if (start < 98)
{
while (start <= 98)
{
print_number(start);
_putchar(',');
start++;
}

}
else if (start == 98)
{
print_number(98);
}
else
{
while (start >= 98)
{
print_number(start);
if (start != 98)
{
_putchar(',');
_putchar(' ');
}
start--;
}
}
}

