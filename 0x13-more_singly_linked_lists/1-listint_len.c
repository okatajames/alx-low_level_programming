#include "lists.h"

/**
 * listint_len - is the number of elements in linked listint_t list
 *
 * @h: the head pointer
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while(h != NULL)
	{
	h = h->next;
		counter++;
	}
	return (counter);
}
