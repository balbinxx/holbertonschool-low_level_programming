#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list
 * Description: if str is NULL, print [0] (nil)
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
