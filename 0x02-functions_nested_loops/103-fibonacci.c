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
long a, b, even_sum, sum;
a = 1;
b = 2;
even_sum = 2;
do {
	sum = a + b;
	if (sum % 2 == 0)
	{
		even_sum += sum;
	}
	a = b;
	b = sum;
} while (sum < 4000000);
printf("%ld\n", even_sum);
return (0);
}
