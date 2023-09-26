#include "lists.h"
/**
 * get_nodeint_at_index - get the node at a specific index
 * @head: pointer to the head of list
 * @index: index to return itds node
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (node == NULL)
		{
			return (NULL);
		}
		node = node->next;
	}
	return (node);
}
