#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: head node
 * @idx: index for the new node
 * @n: data of new node
 * Return: adress of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes;
	listint_t *node_index = *head;
	listint_t *new_node, *node_after;

	if (!head || !*head)
		return (NULL);
	for (nodes = 0; node_index; nodes++)
		node_index = node_index->next;
	if (idx > (nodes + 1))
		return (NULL);
	node_index = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		node_after = *head;
		for (nodes = 0; nodes < (idx - 1); nodes++)
			node_index = node_index->next;
		for (nodes = 0; nodes < idx; nodes++)
			node_after = node_after->next;
		node_index->next = new_node;
		new_node->next = node_after;
		return (new_node);

	}
}
