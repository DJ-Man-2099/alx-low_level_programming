#include <stdio.h>
#include "main.h"
/**
 * _abs - function
 * @n: the integer to be edited
 * it returns the absolute value of n
 *
 * Return: |n|
 */
int _abs(int n)
{
int abs;
abs = n;
if (abs < 0)
{
	abs = -abs;
}
return (abs);
}
