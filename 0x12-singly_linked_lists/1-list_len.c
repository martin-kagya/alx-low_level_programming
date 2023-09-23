#include "lists.h"
/**
 * list_len - function to return length of lists
 * @h: the list to be passed to the function
 * Return: The length of the list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
