#include "main.h"
/**
 *reverse_array - takes an array nd reverse indices
 *
 *@a: input array
 *@n: total element
 *
 * Return: (Nothing)
 */
void reverse_array(int *a, int n)
{
int temp;
int i;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
