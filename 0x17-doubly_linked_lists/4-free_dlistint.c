#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a linked list
 * @head: head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
