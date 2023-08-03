#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 *
 * @head: Pointer to a pointer to the head of the linked list
 * @idx: Index at which the new node to be inserted
 * @n: Value to be assigned
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *val, *new_node;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0) {
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	val = *head;
	while (val != NULL) {
		if (count == idx - 1) {
			new_node->next = val->next;
			val->next = new_node;
			return (new_node);
		}
		val = val->next;
		count++;
	}

	free(new_node);

	return (NULL);
}
