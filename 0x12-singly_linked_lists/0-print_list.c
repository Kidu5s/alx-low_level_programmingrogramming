#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	for (i = 0; i < 1; i++)
		printf("[%d] %s\n", h->len, h->str);
	return (i);
}
