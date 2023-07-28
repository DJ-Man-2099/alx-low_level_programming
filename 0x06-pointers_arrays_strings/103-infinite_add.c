#include "main.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * temp_add - string function
 * @n1: pointer to first integer
 * @n2:	pointer to second integer
 * @baseN1: start of n1
 * @baseN2: start of n2
 * @r: pointer to buffer
 * @baseR: start of r
 * @carry: remainder
 *
 * adds two numbers, stores result in r
 *
 * Return: if result is valid
 */
bool temp_add(char *n1, char *n2, char *baseN1,
char *baseN2, char **r, char *baseR, int *carry)
{
	int i1, i2;

	while (n1 >= baseN1)
	{
		if (*r <= baseR + 1)
			return (false);
		i1 = *n1 - '0';
		if (n2 < baseN2)
			i2 = 0;
		else
			i2 = *n2 - '0';
		**r = '0' + (((i1 + i2 + *carry) % 10));
		*carry = (i1 + i2 + *carry) / 10;
		n1--;
		if (n2 >= baseN2)
			n2--;
		(*r)--;
	}
	printf("%s\n", *r);
	return (true);
}
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
	char *baseN1 = n1, *baseN2 = n2, *baseR = r;
	int carry = 0;
	bool n1Bigger, valid;

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
		printf("N1 > n2\n");
		valid = temp_add(n1, n2, baseN1, baseN2, &r, baseR, &carry);
		if (!valid)
			return (0);
	}
	else
	{
		printf("N2 > n1\n");
		valid = temp_add(n2, n1, baseN2, baseN1, &r, baseR, &carry);
		if (!valid)
			return (0);
	}
	if (carry == 1)
		*r = '0' + carry;
	else
		r++;
	printf("%s\n", r);
	return (r);
}
