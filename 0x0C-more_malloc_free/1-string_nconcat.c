#include<stdlib.h>
/**
 * string_nconcat - string concat funcution theat return ponter
 * @s1:firststring
 * @s2:second string
 * @n:up to where we con catnate
 * Return:pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int l1, l2, i, j;

	l1 = 0;
	l2 = 0;
	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	if (n > l2)
		n = l2;
	new = (char *) malloc(sizeof(char) * (l1 + n + 1));
	for (s1[i] != '\0' ; i++)
	{
	new[i] = s1[i];
	}
	for (j < n && s2[j] != '\0' ; j++)
	{
	new[i] = s2[j];
	i++;
	}
	new[i] = '\0';
	return (new);
	}
