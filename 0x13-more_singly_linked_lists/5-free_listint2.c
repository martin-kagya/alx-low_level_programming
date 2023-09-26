#include "lists.h"
/**
 * free_listint2 - frees the listint_t
 * @head: pointer to the head of the list
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
	}
}
