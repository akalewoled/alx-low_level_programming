#include "main.h"
/**
 * *_strchr - fined and serach
 * @s: the source
 * @c: the charcter to be found
 * Return: char
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
