#include "lists.h"
/**
 * add_nodeint_end - adds a node to end of list
 * @head: head of the list
 * @n: integer to be added
 * Return: returns the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	new->n = n;
	new->next = NULL;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
