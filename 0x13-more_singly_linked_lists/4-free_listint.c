#include "lists.h"
/**
 * free_listint - function to free listint_t
 * @head: pointer to the head of the list
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free(head);
}
