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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
