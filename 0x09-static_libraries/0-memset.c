/**
 * _memset - a function that fills
  * @s: input pointer to char type
 * @b: input variable of char
  * @n: unsigned int variable
 * Return: A pointer to the filled memory
   */



char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}
