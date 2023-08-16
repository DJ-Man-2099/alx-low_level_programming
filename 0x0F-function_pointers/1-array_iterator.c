#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - func pointer function
 * @array: array to edit
 * @size: size of array
 * @action: function to use on array elements
 *
 * calls action(a[i])
 * where 0<=i<size
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
