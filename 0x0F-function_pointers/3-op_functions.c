#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - arithmetic
 * @a: first number
 * @b: second number
 *
 * adds the 2 numbers
 *
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - arithmetic
 * @a: first number
 * @b: second number
 *
 * subtracts the 2 numbers
 *
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - arithmetic
 * @a: first number
 * @b: second number
 *
 * multiplies the 2 numbers
 *
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - arithmetic
 * @a: first number
 * @b: second number
 *
 * divides the 2 numbers
 * if b != 0
 *
 * Return: a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - arithmetic
 * @a: first number
 * @b: second number
 *
 * gets the remainder of
 * a if divided by b
 * if b != 0
 *
 * Return: a%b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
