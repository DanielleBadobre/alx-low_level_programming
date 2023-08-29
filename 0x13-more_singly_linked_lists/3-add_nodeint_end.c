#include "lists.h"
/**
 * add_nodeint_end - adds a new node a the end of a list
 * @head: head pointer
 * @n: integer of node to add
 * Return: adress of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
