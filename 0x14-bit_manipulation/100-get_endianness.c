#include "main.h"
/**
 * get_endianness - bit info function
 *
 * check if machine is big endian or little
 *
 * Return: 1 if big,
 * 0 if little
 */
int get_endianness(void)
{
	unsigned int num = 0x01020304;
	unsigned char *p = (unsigned char *)&num;

	if (*p == 1 && *(p + 1) == 2 && *(p + 2) == 3 && *(p + 3) == 4)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
