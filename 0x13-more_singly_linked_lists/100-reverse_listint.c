#include "lists.h"
/**
 * reverse_listint - reverses the linked list
 * @head: pointer to head of list
 * Return: first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;

		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
