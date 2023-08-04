#include <stdio.h>
#include <stdlib.h>
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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
