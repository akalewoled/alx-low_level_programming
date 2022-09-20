#include"main.h"


/**
  * puts2 - prints every character of a strin
  * @str: string parameter in
  * Return: Notin
       */



void puts2(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; ++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');

}
