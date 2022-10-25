#include "lists.h"

/**
 * free_listint - free list
    * @head: pointer to the first node of the list
   * Return: nothin
  */
void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(current);
	}
}
