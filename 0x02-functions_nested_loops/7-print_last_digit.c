#include "main.h"
/**
 *print_last_digit - prints last digit
 *@num : this is the input number
 *Return: 0 (success)
 */
int print_last_digit(int num)
{
int end_digit;
end_digit = num % 10;
if (end_digit < 0)
{
return (-end_digit);
}
else
{
return (end_digit);
}
}
