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
char a;
for (a = '0'; a <= '9'; a++)
	putchar(a);
for (a = 'a'; a <= 'f'; a++)
	putchar(a);
putchar('\n');
return (0);
}
