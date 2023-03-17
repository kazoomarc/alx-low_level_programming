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
putchar('\n');
c++;
}
return (0);
}
