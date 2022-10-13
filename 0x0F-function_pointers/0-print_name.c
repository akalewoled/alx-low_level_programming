/**
 * print_name - a funuctoin that prints name
 * @name :the name to be prnted
 * @f :i dont know whyi nrted trhis
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
