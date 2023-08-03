#include "lists.h"

/**
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *val;
	int sum;

	val = (listint_t *)malloc(sizeof(listint_t));
	val = NULL;
	sum = 0;

	if (head == NULL)
		return (sum);

	val = head;
	while (val != NULL)
	{
		sum += val->n;
		val = val->next;
	}

	free(val);
	return (sum);

}
