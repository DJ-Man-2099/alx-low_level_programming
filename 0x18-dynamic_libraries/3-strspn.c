#include "main.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * _strspn - string function
 * @s: pointer to string to search
 * @accept: pointer to string to search for
 *
 * returns the number of occurences
 * of the characters in accept
 * in the string s
 *
 * Return: number of occurences
 */

unsigned int _strspn(char *s, char *accept)
{
	char *base = s, *baseAccept = accept;
	int pos = 0;
	bool isDifferent = false;

	while (!isDifferent)
	{
		while (1)
		{
			isDifferent = *base != *baseAccept;
			if (!isDifferent)
			{
				break;
			}
			baseAccept++;
			if (*baseAccept == '\0')
			{
				pos = base - s;
				break;
			}
		}
		if (*base == '\0')
			break;
		base++;
		baseAccept = accept;
	}
	return (pos);
}
