#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: pointer to head of linked list
 * @idx: index to be inserted
 * @n: node data to be inserted
 *
 * Return: Address of node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ptr, *nextPtr, *newNode;

	ptr = *h;
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode || !idx)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (*h == NULL)
	{
		*h = newNode;
		return (*h);
	}
	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	if (!ptr->next)
	{
		ptr->next = newNode;
		newNode->prev = ptr;
		return (newNode);
	}
	nextPtr = ptr->next;
	ptr->next = newNode;
	newNode->prev = ptr;
	newNode->next = nextPtr;
	nextPtr->prev = newNode;
	return (newNode);
}
