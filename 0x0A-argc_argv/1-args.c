#include <stdio.h>
/**
 * main - check function
 * @argc: number of arguments
 * @argv: arguments
 *
 * prints its number of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
