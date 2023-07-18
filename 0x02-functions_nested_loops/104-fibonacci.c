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
int i;
double a, b, sum;
a = 1;
b = 2;
printf("%.0f, %.0f, ", a, b);
for (i = 2; i < 98; i++)
{
	sum = a + b;
	printf("%.0f", sum);
	if (i != 97)
	{
		printf(", ");
	}
	a = b;
	b = sum;
}
printf("\n");
return (0);
}
