#include "main.h"
/**
 *print_alphabet_x10 - prints linear alphabet repeatedly * 10
 *Return: 0 (success)
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
i++;
}
}
