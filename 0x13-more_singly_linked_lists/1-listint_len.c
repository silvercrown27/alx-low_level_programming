#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: linked list
 * Return: No of elements
 */

size_t listint_len(const listint_t *h)
{
	int count;
	const listint_t *head;

	if (h == NULL)
		return (0);

	count = 0;
	head = NULL;
	head = h;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
