#include "main.h"

/**
 * trueFact - calculate teh factorial
 *
 * @n: input to fact
 *
 * Return: fact of n
*/
int trueFact(int n)
{
/*base case*/
if (n == 1)
{
return (1);
}

return (n * trueFact(n - 1));
}

/**
 * factorial - calculates factorial of n
 * @n: ninput to make calculations on
 * Return: - int fact(n)
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
return = (trueFact(n));
}
