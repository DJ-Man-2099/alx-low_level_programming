#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
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
	int money, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	while (money > 0)
	{
		if (money >= 25)
		{
			money -= 25;
		}
		else if (money >= 10)
		{
			money -= 10;
		}
		else if (money >= 5)
		{
			money -= 5;
		}
		else if (money >= 2)
		{
			money -= 2;
		}
		else
		{
			money -= 1;
		}
		change++;
	}

	printf("%d\n", change);

	return (0);
}
