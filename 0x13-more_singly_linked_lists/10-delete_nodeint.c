#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete node at index
 * @head: pointer to the head of linked list
 * @index: index to be deleted
 * Return: 1 on succes and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = NULL;
	listint_t *node_delete = NULL;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		return (1);
	}
	current_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current_node == NULL)
		{
			return (-1);
		}
		current_node = current_node->next;
	}
	node_delete = current_node->next;
	current_node->next = node_delete->next;
	free(node_delete);
	return (1);
}
