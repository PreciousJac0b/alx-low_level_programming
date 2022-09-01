#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of node data
 * @head: Head of linked list
 *
 * Return: sum of integers in a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int summed = 0;

	ptr = head;
	if (head == NULL)
		return (0);
	while (ptr)
	{
		summed += ptr->n;
		ptr = ptr->next;
	}

	return (summed);
}
