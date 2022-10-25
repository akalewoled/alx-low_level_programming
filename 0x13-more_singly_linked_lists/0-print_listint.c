#include "lists.h"
/**
 * print_listint - print list
 * @h:ponter
 * Return:pointer
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
