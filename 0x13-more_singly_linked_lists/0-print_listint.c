#include "lists.h"

/**
 * print_listint - function that counts the number of nodes in the list
 * @h: input
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *head;

	head = (listint_t*)malloc(sizeof(listint_t));
	head = NULL;

	if (h == NULL)
		return (count);

	head = h;

	while (head != NULL)
	{
		count++;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (count);
}
