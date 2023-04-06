#include "main.h"

/**
 * truePow - calculates power x to y
 * @x: base
 * @y: exponent
 * Return: - power x to y
*/

int truePow(int x, int y)
{
if (y == 0)
{
return (1);
}
return (x * truePow(x, (y - 1)));
}

/**
 * _pow_recursion - calculates power x to y
 * @x: base
 * @y: exponent
 * Return: - power x to y
*/

int _pow_recursion(int x, int y)
{
/*base case*/
if (y < 0)
{
return (-1);
}
return (truePow(x, y));
}

