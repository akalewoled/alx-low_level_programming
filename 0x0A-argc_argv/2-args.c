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
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
return (0);

}
