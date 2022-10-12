#include <stddef.h>
/**
 * array_iterator - abcd
 * @array:arry
 * @size:abcd
 * @action:abcd
 * Return :null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
