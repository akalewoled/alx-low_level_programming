#include "lists.h"

/**
 * print_dlistint - prints all the elements of double linked list 
 * @h: head of the list
 * Return: unsigned int of size int 
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size;

	size = 0;

	if (h == NULL)
		return (size);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
