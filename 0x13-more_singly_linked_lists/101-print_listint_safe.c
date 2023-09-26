#include "lists.h"
/**
 * print_listint_safe - prints the list
 * @head: pointer to the head of list
 * Return: returns number of elements or 98 on error
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *current = head;

	while (current != head)
	{
		if (current == NULL)
		{
			exit(98);
		}
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
