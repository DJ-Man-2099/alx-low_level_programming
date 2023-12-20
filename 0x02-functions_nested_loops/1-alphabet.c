#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function
 *
 * it prints the alphabet,
 * in lower case
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
_putchar('\n');
}
