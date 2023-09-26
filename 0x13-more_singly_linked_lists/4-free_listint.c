#include "lists.h"
/**
 * free_listint - function to free listint_t
 * @head: pointer to the head of the list
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *traverse = head;
	while (traverse != NULL)
	{
		listint_t *next = traverse->next;
		free(traverse);
		traverse = next;
	}
}
