#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 *
 * @head: the linked list
 * @index: the index of the number to be fetched from the list
 *
 * Return: the nth node if succes, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *val;

	val = (listint_t *)malloc(sizeof(listint_t));
	val = NULL;

	if (head == NULL)
		return (NULL);

	val = head;
	count = 0;
	while (val != NULL)
	{
		count++;
		if (count == index)
		{
			free(val);
			return (val);
		}
		val = val->next;
	}
	free(val);
	return (NULL);

}
