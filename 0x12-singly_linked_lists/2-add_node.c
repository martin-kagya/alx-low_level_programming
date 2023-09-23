#include "lists.h"
/**
 * add_node - add node to to the beginning of the list
 * @head: head for the list
 * @str: string to be copied
 * Return: returns address of the new node or NULL;
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	copy = strdup(str);
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	for (len = 0; str[len];)
	{
		len++;
	}
	new->str = copy;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
