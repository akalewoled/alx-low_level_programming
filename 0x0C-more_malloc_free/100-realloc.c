#include<stdlib.h>
/**
 * _realloc - main
 * @ptr: empty spce
 * @old_size: new
 * new_size: re lloc
 * Return:space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *new_ptr, *temp_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	temp_ptr = ptr;
	for (i = 0; i < old_size; i++)
		new_ptr[i] = temp_ptr[i];
	free(ptr);
	return (new_ptr);
}
