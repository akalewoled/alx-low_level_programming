#include <stdio.h>
#include "main.h"
/**
 * main - Print the name of the p
 * @argc: Count argument
 * @argv: Argument
 * Return: Always 0 (Succes
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
}
