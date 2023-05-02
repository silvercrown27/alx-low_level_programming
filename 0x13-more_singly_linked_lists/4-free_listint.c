#include "lists.h"

/**
 * free_listint - function that fre the memory in a linked list
 * @head: linked_list
 *
 * Return:: No value
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
