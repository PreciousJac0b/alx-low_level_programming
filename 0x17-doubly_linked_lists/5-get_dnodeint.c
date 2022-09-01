#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head of linked list
 * @index: index to be obtained
 *
 * Return: The node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	dlistint_t *gottenNode;
	unsigned int i = 0;

	ptr = head;
	while (i < index)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		i++;
	}
	gottenNode = ptr;

	return (gottenNode);
}
