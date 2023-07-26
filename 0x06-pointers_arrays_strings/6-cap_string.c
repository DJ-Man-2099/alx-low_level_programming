#include "main.h"
#include <stdbool.h>

/**
 * checkIsNewWord - string function
 * @c: char to check
 *
 * check if char is a separator
 *
 * Return: if char is a separator
 */

bool checkIsNewWord(char c)
{
	switch (c)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (true);
		default:
			return (false);
	}
}

/**
 * cap_string - string function
 * @str: pointer to string
 *
 * capitalizes all words of a string
 *
 * Return: the pointer to Capitalized String
 */

char *cap_string(char *str)
{
	bool isNewWord = true;
	char *base = str;

	while (*str != '\0')
	{
		if (isNewWord)
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 'a' - 'A';
		}
		isNewWord = checkIsNewWord(*str);
		str++;
	}
	return (base);
}
