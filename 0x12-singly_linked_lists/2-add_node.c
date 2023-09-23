#include "lists.h"
/**
 * add_node - add node to to the beginning of the list
 * @head: head for the list
 * @str: string to be copied
 * Return: returns 0;
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->len = strlen(str);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		return (NULL);
		free(new);
	}
	new->next = *head;
	*head = new->next;
}
