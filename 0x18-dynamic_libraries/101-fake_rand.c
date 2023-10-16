#include "main.h"
static int count = 0;
int rand()
{
	int numbers[] = {8, 8, 7, 9, 23, 74};

	return (numbers[count++]);
}
