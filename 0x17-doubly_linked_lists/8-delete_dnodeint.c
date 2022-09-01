#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *decoy;
	unsigned int i = 0;

	while (i < index)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}

	if (ptr == *head)
	{
		*head = ptr->next;
		decoy = *head;
		if (decoy != NULL)
			decoy->prev = NULL;
	}

	else
	{
		ptr->prev->next = ptr->next;
		if (ptr->prev != NULL)
			ptr->next->prev = ptr->prev;
	}

	free(ptr);
	return (1);
}
