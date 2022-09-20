#include"main.h"
/**
  * puts_half - prints half of a string
  * @str: string parameter input
     * Return: Nothing
     * _strlen: creatinglenghth funuction
*/

void puts_half(char *str)

{
	int l, n;

	l = _strlen(str);
	if (l % 2 == 0)
	{
		for (n = l / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	else
		{
			for (n = ((l - 1) / 2) + 1; str[n] != '\0'; ++n)
				_putchar(str[n]);
		}
	_putchar('\n');
}

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
