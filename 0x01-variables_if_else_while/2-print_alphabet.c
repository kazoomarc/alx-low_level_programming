#include<stdio.h>
/**
* main - program to print alphabet line by line
*
* Return: 0 (success)
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
