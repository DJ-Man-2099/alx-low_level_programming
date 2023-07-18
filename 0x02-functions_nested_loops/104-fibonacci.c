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
unsigned long int a, b, i, sum;
a = 1;
b = 2;
printf("%lu, %lu, ", a, b);
for (i = 2; i < 98; i++)
{
	sum = a + b;
	printf("%lu", sum);
	if (i != 49)
	{
		printf(", ");
	}
	a = b;
	b = sum;
}
printf("\n");
return (0);
}
