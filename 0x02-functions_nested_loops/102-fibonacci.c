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
long a, b, i, sum;
a = 1;
b = 2;
printf("%ld, %ld, ", a, b);
for (i = 2; i < 50; i++)
{
	sum = a + b;
	printf("%ld", sum);
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
