#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - adds a node at the start of listint_t list
  *
  * @head: head of a double pointer
  * @n: int add the list
  * Return: return NULL if fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *poitr;

	if (head == NULL)
		return (NULL);
	poitr = malloc(sizeof(listint_t));
	if (poitr == NULL)
		return (NULL);
	poitr->n = n;
	poitr->next = *head;
	*head = poitr;
	return (poitr);
}
