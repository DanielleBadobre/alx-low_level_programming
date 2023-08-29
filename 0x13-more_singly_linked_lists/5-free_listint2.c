#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: head pointer set to NULL
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (!head)
		return;
	if (!*head)
		return;
	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
