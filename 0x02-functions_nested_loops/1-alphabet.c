#include "main.h"
/**
 *print_alphabet - prints linear alphabet and new line
 *
 *Return: 0 on success
 */
void print_alphabet(void)
{
int alpha;
for (alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
