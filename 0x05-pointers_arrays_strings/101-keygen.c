#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - password breaker
 *
 * cracks the password of 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2772)
	{
		c = rand() % 128;
		if (c == '\0')
			continue;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
