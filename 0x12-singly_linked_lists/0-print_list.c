#include "lists.h"
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s", h->len, h->str);
		}
		else
		{
			printf("[0]\n");
		}
		counter++;
		h = h->next;
	}
}
