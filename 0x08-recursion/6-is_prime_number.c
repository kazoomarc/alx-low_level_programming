#include "main.h"
/**
 *is_prime_number - search if prime or not
 * @n: search if prime
 *Return: the root of n
 */

int is_prime_number(int n)
{
/*bas case:*/
if (n < 2)
return (0);

/*check if divisible by its root or less than that*/
for (int i = 2; i * i <= n; i++)
{
if (n % i == 0)
return (0);

}

return (1);
}



