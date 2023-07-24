#include "main.h"


/**
 * _strlen - pointer function.
 * @s: pointer to a string
 *
 * returns the length of a string in s
 *
 * Return: length of string s
 */

int _strlen(char *s)
{
        int charSize, count;

        charSize = sizeof(*s);
        count = 0;
        while (*s != '\0')
        {
                count++;
                s++;
        }
        return (charSize * count);
}
/**
 * puts_half - pointer function.
 * @str: pointer to a string
 *
 * prints half of a string,
 * followed by a new line
 *
 * Return: void
 */

void puts_half(char *str)
{
	int size, start;

	size = _strlen(str);
	if (size % 2 == 0)
		start = size / 2;
	else 
		start = (size + 1) / 2;
	str += start;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
