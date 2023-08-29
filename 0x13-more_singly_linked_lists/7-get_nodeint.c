#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node of list
 * @head: head node
 * @index: index of node to get
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0, nodes;
	listint_t *temp = head;

	if (!head)
		return (NULL);
	for (nodes = 0; temp; nodes++)
		temp = temp->next;
	if (index > nodes)
		return (NULL);
	temp = head;
	while (counter <= index)
	{
		if (counter <= index)
			return (temp);
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
