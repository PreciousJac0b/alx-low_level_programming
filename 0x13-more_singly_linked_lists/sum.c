int sum_listint(listint_t *head)
{
	listint_t *t;
	unsigned int i = 0;
	t = head;
	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return sum;
}
