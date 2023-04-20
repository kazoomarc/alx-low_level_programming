#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - println string.
 * @separator: separating string.
 * @n: counter.
 * @...: variadic fn.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list temp;
char *str;
unsigned int j;
va_start(temp, n);
for (j = 0; j < n; j++)
{
str = va_arg(temp, char *);


if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}


if (j != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}

printf("\n");
va_end(temp);
}

