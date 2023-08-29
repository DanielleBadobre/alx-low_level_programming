#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning of list
 * @head: pointer to first node
 * @n: integer of new node
 * Return: adress of new node, or NULL
 */
listint_t *add_nodeint(listnt_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
