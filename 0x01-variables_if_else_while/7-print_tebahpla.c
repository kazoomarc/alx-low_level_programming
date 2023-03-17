#include <stdio.h>
/**
 *main - alphabet letters in reverse order
 *
 *Return: 0 (success)
 */
int main(void)
{
char text;
text = 'z';
while (text >= 'a')
{
putchar(text);
text--;
}
putchar('\n');
return (0);
}
