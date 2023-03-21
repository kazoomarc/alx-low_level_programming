#include "main.h"
#include <stdio.h>
/**
*_abs - returns absolute value of a number
*
*@abs_num: takes variable to be operated by absolute function
*
*Return: 0 (success)
*/
int _abs(int abs_num)
{
if (abs_num < 0)
{
return (-abs_num);
}
else
{
return (abs_num);
}
}
