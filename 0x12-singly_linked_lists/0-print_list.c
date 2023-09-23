#include "lists.h"
/**
 * print_list - function to list members of the list
 * @h: pointer to struct of type list_t
 * Return: the number of elements
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
