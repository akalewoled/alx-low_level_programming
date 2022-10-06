#include <stdlib.h>
/**
 * _memeset -assign be for ll mwbers
 * @s:the character
 * @b:the assigned
 * @n: the lengrt
 * Return:char
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc -allocate size using memeset
 * @nmemb:nimb
 * @size:sizeod memory
 * Return:void
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
