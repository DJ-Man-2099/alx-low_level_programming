#include "main.h"

/**
 * rot13 - string function
 * @str: pointer to string to encode
 *
 * encodes a string using rot13
 *
 * Return: the pointer to encoded string
 */

char *rot13(char *str)
{
	int i, isUpper, oldCharIndex, newCharIndex;

	char *base = str;
	char *lower = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == lower[i])
			{
				isUpper = i % 2;
				oldCharIndex = i / 2;
				newCharIndex = (oldCharIndex + 13) % 26;
				newCharIndex = (newCharIndex * 2) + isUpper;
				*str = lower[newCharIndex];
				break;
			}
		}
		str++;
	}
	return (base);
}
