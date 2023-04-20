#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of all args
 * @n: parameters
 * @...: variadic parameter
 *
 * Return: If n == 0 - 0.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
va_list variadic;
unsigned int i, sum = 0;

va_start(variadic, n);

for (i = 0; i < n; i++)
{
sum += va_arg(variadic, int);
}

va_end(variadic);

return (sum);
}

