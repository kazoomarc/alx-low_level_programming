
#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - adds diagonals
 * @a: the array
 * @size: array size
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int num, num2, i;
num = 0;
num2 = 0;
for (i = 0; i < size; i++)
{
num = num + a[i * size + i];
}
for (i = size - 1; i >= 0; i--)
{
num2 += a[i * size + (size - i - 1)];
}
printf("%d, %d\n", num, num2);
}

