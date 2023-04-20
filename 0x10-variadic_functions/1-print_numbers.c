#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - println a number.
 * @separator: string to separate.
 * @n: variadic counter.
 * @...: variadic input.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list counter;
unsigned int j;

va_start(counter, n);

for (j = 0; j < n; j++)
{
printf("%d", va_arg(counter, int));

if (j != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(counter);
}

