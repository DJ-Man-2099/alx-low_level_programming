#include <stdio.h>
/**
 * main - check function
 * @argc: number of arguments
 * @argv: arguments
 *
 * prints its name
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
