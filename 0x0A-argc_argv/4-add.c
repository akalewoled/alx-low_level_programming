#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * isNum -abcd abcd
 * @num :kkmkm
 * Return: 0
 */
int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (1);							}
	return (0);
}
/**
 * main - a program that adds positive numbers
* @argc: holds the number of arguments passed
* @argv: array pointer that holds the arguments passe
 * Return: Always 0 (Succe
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
			printf("Error\n");
			return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
