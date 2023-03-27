#include "main.h"

/**
 * swap_int - meaning
 *@a: value 1 to be swapped to b
 *@b: value 2 to be swaped to a
 *Return: Nothing
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
