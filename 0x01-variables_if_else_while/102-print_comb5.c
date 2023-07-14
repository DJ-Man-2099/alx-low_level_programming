#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * print whether the number stored in the variable n is positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d;
for (a = 0; a <= 9; a++)
{
	for (b = 0; b < 9; b++)
		{
		for (c = a; c <= 9; c++)
		{
			if (c == a)
				d = b + 1;
			else
				d = b;
			for (; d <= 9; d++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar(' ');
				putchar('0' + c);
				putchar('0' + d);
				if (!(a == 9 && b == 8 && c == 9 && d == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
