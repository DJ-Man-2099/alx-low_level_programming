#include "main.h"
#include <sys/param.h>
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
	if (BYTE_ORDER == BIG_ENDIAN)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
