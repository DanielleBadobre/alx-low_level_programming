#include "lists.h"
/**
 * list_len - shows number of node
 * @h: pointer to list adress
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++
	}
	return (i);
}
