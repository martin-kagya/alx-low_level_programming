#include "lists.h"
/**
 * listint_len - a function to return number of elements
 * @h: pointer to the head
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
