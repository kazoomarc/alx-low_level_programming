#include<stdio.h>
#include "main.h"
/**
 *print_natural - descrip
*print_number - prints the number out
*@print_natural - print sequences 0f numbrs
*@num: variable for print
*
*Return 0: (success)
*/
void print_number(int num)
{
if (num < 0)
{
putchar('-');
num = -num;
}

if (num / 10)
{
print_number(num / 10);
}
putchar(num % 10 + '0');

}

void print_natural(int n)
{
int end_num = n;
int i = 0;
for (i = 1; i < end_num; i++)
{
if (i % 3 == 0)
{
print_number(i);
putchar(' ');
}

if (i % 5 == 0)
{
print_number(i);
putchar(' ');
}
putchar('\n');
}
}

