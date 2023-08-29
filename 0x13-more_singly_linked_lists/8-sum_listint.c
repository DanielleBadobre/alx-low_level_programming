#include "lists.h"
/**
 * sum_listint - returns the sum of all data
 * @head: head node
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
