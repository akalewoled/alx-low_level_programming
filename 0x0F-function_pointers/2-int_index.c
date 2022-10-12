#include <stddef.h>
#include "main.h"
/**
 * int_index -idk
 * @array :array
 * @size: naew
 * @cmp:new
 * Retun:abcd
 * */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (index = 0; index < size; index++)
		{
			y = cmp(array[index]);
			if (y == TRUE)
				return (index);
		}
	}
	return (-1);
}
