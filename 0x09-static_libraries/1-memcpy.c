#include "main.h"
/**
* *_memcpy - funucton to co
* @dest: destnation
* @src: source
* @n: incrementing
* Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
