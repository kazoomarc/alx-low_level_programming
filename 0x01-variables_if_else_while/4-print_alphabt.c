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
if (c == 'q' || c == 'e')
{
continue;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}


