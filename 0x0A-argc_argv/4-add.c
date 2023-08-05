#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
/**
 * isNumber - check function
 * @str: number
 *
 * check if string is number
 *
 * Return: true or false
 */
bool isNumber(char const *str)
{
	char const *base = str;

	while (*base != '\0')
	{
		if (!isdigit(*base))
		{
			return (false);
		}
		base++;
	}

	return (true);
}
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
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
