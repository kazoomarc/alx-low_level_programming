#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 *main - checks the last digit
 *
 *Return: 0 (success)
 */
int main(void)
{
int n, digit;
char text[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;

if (digit > 5)
printf("%s %d is %d and is greater than 5\n", text, n, digit);
else if (digit == 0)
printf("%s %d is %d and is 0\n", text, n, digit);
else if (digit < 6 && digit != 0)
printf("%s %d is %d and is less than 6 and not 0\n", text, n, digit);
return (0);
}
