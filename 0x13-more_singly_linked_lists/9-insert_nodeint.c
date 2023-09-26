#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at
 * a specific index
 * @head: pointer to head
 * @idx: index to be used
 * n: number to be used as value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;
	listint_t *current;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
