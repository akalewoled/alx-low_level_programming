#include "variadic_functions.h"
/**
 * print_char - prnterof cahar
 * @arg :char list
 * Return :abcd
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}
/**
 * print_int - prnt list
 * @arg : kist input
 * Return :int
   */

void print_int(va_list arg)

{
	int n = va_arg(arg, int);

	printf("%d", n);
}
/**
 * print_float - prints float
 * @arg:float input
 * Description : each othetr
 * Return  float
 */

void print_float(va_list arg)

{
	float n = va_arg(arg, double);

	printf("%f", n);
}
/**
 * print_string - prints string list
 * @arg : string input
 * Return :string
 */

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - to what ever paramette
 * @format : input
 * Return :nothing
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";

	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
