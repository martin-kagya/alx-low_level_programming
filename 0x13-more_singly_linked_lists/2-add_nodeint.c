#include "lists.h"
/**
 * add_nodeint - adds node to the beginning of a list
 * @head: head of the list
 * @n: number to be added
 * Return: returns number of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(int));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
