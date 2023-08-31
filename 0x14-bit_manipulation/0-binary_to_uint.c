#include "main.h"
/**
 * binary_to_uint - bit manipulation function
 * @b: binary number as string
 *
 * converts binary to decimal
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, base = 1, len;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b) - 1;

	for (i = len; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result += base * (b[i] == '0' ? 0 : 1);
		base *= 2;
	}
	return (result);
}
