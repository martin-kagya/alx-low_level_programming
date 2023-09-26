#include "lists.h"
/**
 * pop_listint - removes the head node and returns its value
 * @head: node to be removed
 * Return: value of head
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp = NULL;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	value = temp->n;
	*head = (*head)->next;
	free(temp);
	return (value);
}
