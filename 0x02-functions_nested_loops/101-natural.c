#include <stdio.h>
#include "main.h"
/**
 * main - prints sum of natural numbers
 * that are below 1024
 * and are multiples of 3, 5
 *
 * Return: void
 */
int main(void)
{
int a, sum;
sum = 0;
for (a = 1; a < 1024; a++)
{
	if (a % 3 == 0 || a % 5 == 0)
	{
		sum += a;
	}
}
printf("%d\n", sum);
return (0);
}
