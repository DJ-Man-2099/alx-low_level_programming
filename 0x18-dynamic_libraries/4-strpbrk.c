#include "main.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * _strpbrk - string function
 * @s: pointer to string to search
 * @accept: pointer to string to search for
 *
 * returns pointer to first occurence
 * of the characters in accept
 * in the string s
 *
 * Return: pointer to occurence
 */

char *_strpbrk(char *s, char *accept)
{
	char *base = s, *baseAccept = accept;
	bool isDifferent = false;

	while (*base != '\0')
	{
		while (*baseAccept != '\0')
		{
			isDifferent = *base != *baseAccept;
			if (!isDifferent)
			{
				return (base);
			}
			baseAccept++;
		}
		base++;
		baseAccept = accept;
	}
	return (NULL);
}
