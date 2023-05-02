#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: head pointer to the first node in the list
 *
 * Return: returns the data stored in the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	node_data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (node_data);
}
