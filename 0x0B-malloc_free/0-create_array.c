#include<stdlib.h>
/**
 * create_array - what the fuck
 * @size : errray size
 * @c :array intialize
 * Return:array betese
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
