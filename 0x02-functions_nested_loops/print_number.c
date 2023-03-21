#include<stdio.h>
#include "main.h"

void print_number(int num)
{
if(num < 0)
{
_putchar('-');
num = -num;
}

if(num/10)
{
print_number(num/10);
}
_putchar(num%10 + '0');

}
