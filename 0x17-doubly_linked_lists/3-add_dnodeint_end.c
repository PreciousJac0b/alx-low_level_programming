#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: head of the linkedlist
 * @n: data of the node to be added
 *
 * Return: address of new node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (!*head)
	{
		*head = newNode;
		return (*head);
	}
	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = newNode;
	newNode->prev = ptr;

	return (newNode);
}
