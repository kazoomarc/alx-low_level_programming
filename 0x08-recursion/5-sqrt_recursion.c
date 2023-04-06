#include "main.h"

/**
 * trueSquareRoot - helper function
 * @n: number to compute root for
 * @low: lowest value to search
 * @high: largest value to search
 * Return: squaroot of n
*/
int trueSquareRoot(int n, int low, int high)
{
int mid = (low + high) / 2;

/* first check*/
if (mid * mid == n)
{
return (mid);
}

/*search the lower half */
if (mid * mid > n)
{
return (trueSquareRoot(n, low, mid - 1));
}

/*search the upper half */
if (mid * mid < n)
{
/* Check if mid+1 is the square root */
if ((mid + 1) * (mid + 1) > n)
{
return (mid);
}
/* Otherwise, search the upper half */
else
{
return (trueSquareRoot(n, mid + 1, high));
}
}

}

/**
 * _sqrt_recursion - recurse on n to find root
 * @n: number to find sqrt of
 * Return: the sqrt of n
*/


int _sqrt_recursion(int n)
{
/* special cases */
if (n < 0)
{
return (-1);
}

if (n == 0 || n == 1)
{
return (n);
}

/* Call the helper function to perform the recursion */
return (trueSquareRoot(n, 1, n));
}
