#include"main.h"

/**
 * print_square - print a square using the characte
 * @size: is the size of the squ
 * Return: 0
 */
void print_square(int size)

{
		int row, column;

		for (row = 1; row <= size; ++row)
		{
			for (column = 1; column <= size; ++column)
				_putchar('#');
		}
		_putchar('\n');
}
