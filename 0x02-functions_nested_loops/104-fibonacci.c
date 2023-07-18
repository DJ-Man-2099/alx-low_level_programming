#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * main - prints sum of natural numbers
 * that are below 1024
 * and are multiples of 3, 5
 *
 * Return: void
 */
int main(void)
{
int i;
double a, b, sum;
a = 1;
b = 2;
printf("%.0f, %.0f, ", a, b);
for (i = 2; i < 98; i++)
{
	sum = ceil(a) + ceil(b);
	printf("%.0f", ceil(sum));
	if (i != 97)
	{
		printf(", ");
	}
	a = ceil(b);
	b = ceil(sum);
}
printf("\n");
return (0);
}
