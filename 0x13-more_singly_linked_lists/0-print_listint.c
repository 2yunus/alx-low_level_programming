#include "lists.h"

/**
 *print_listint - prints the data.
 *@h: parameter passed.
 *
 * Return: the nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}