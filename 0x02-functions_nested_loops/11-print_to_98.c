#include "main.h"
#include<stdio.h>
#include<unistd.h>
/**
<<<<<<< HEAD
 *print_to_98 - prints to 98
 *print_number - it does the format printing
 *@num: has number to be checked
=======
 *print_sign - prints to 98
 *@n: has number to be checked
>>>>>>> parent of b4b8d0b... 11 commit
 *
 *Return: 0 (success)
 */
void print_number(int num)
{
if (num < 0)
{
_putchar('-');
num = -num;
}

<<<<<<< HEAD
if (num / 10)
=======
if(num/10)
>>>>>>> parent of b4b8d0b... 11 commit
{
print_number(num/10);
_putchar(num%10 + '0');
}
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
if (start != 98) {
_putchar(',');
_putchar(' ');
}
start--;
}
}
}

