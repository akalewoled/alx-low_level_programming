/*
   * _strlen - returns the length of a stri
* @s: string parameter inpu
   * Return: length of string
 */



int _strlen(char *s)

{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
	{
		++counter;
	}
	return (counter);
}
