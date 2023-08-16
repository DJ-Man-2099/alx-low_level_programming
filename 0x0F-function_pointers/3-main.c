#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int a, b, (*func)(int, int);
	const char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	func = get_op_func((char *)op);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(a, b));
	return (0);
}
