#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - checker function
 * @n: the integer to be tested
 * print whether the number stored in the variable n is positive or negative
 * Return: void (Success)
 */
void positive_or_negative(int n)
{
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);
}
