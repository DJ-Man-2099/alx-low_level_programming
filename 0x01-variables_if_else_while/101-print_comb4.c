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
int a, b, c;
for (a = 0; a < 8; a++)
{
	for (b = a + 1; b < 9; b++)
		{
		for (c = b + 1; c <= 9; c++)
		{
			putchar('0' + a);
			putchar('0' + b);
			putchar('0' + c);
			if (!(a == 7 && b == 8 && c == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
