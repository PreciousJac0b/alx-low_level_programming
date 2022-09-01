#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Computes the length of a linked list
 * @h: Head of linked list
 *
 * Return: Returns the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
