#include "lists.h"
/**
 * sum_listint - sums all the value of list
 * @head: pointer to the head of list
 * Return: sum of list values
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (current->next != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	if (current->next == NULL)
		sum += current->n;
	return (sum);
}
