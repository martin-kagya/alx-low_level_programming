#include "lists.h"
/**
 * free_list - a function to free a list
 * @head: a pointer which points to list head
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
