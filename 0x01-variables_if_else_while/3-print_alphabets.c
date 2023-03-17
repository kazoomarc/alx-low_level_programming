#include<stdio.h>
/**
* main - program to print alphabet line by line
*
* Return: 0 (success)
*/
int main(void)
{
char c = 'a';
char d = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (d <= 'Z')
{
putchar(d);
}
putchar('\n');
return (0);
}


