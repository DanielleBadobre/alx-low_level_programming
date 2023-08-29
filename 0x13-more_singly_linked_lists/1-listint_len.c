#include "lists.h"
/**
 * listint_len - gives number of elements
 * @h: pointer to next node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	if (!h)
		return (0);
	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
