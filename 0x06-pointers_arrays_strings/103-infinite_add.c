#include "main.h"
#include <stdbool.h>
#include <stdio.h>

/**
 * infinite_add - string function
 * @n1: pointer to first integer
 * @n2:	pointer to second integer
 * @r: pointer to buffer
 * @size_r: size of buffer
 *
 * adds two numbers, stores result in r
 *
 * Return: the pointer to result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i1, i2;
	bool n1Bigger;
	char *baseN1 = n1, *baseN2 = n2, *baseR = r;

	while (*(n1 + 1) != '\0')
		n1++;
	while (*(n2 + 1) != '\0')
		n2++;
	n1Bigger = n1 - baseN1 >= n2 - baseN2;
	r += size_r;
	*r = '\0';
	r--;
	if (n1Bigger)
	{
		while (n1 >= baseN1)
		{
			if (r <= baseR + 1)
				return (0);
			i1 = *n1 - '0';
			if (n2 < baseN2)
				i2 = 0;
			else
				i2 = *n2 - '0';
			*r = '0' + (((i1 + i2 + carry) % 10));
			carry = (i1 + i2 + carry) / 10;
			n1--;
			if (n2 >= baseN2)
				n2--;
			r--;
		}
	}
	else
	{
		while (n2 >= baseN2)
		{
			if (r <= baseR + 1)
				return (0);
			i2 = *n2 - '0';
			if (n1 < baseN1)
				i1 = 0;
			else
				i1 = *n1 - '0';
			*r = '0' + (((i1 + i2 + carry) % 10));
			carry = (i1 + i2 + carry) / 10;
			n2--;
			if (n1 >= baseN1)
				n1--;
			r--;
		}
	}
	if (carry == 1)
		*r = '0' + carry;
	else
		r++;
	return (r);
}
