#include "lists.h"
/**
 * listint_len - gives number of elements
 * @h: pointer to next node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *temp = h;

	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
