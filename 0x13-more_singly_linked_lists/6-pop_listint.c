#include "lists.h"

/**
 * pop_listint -This fuction deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: It returns deleted data
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numbr;

	if (!head || !*head)
	return (0);

	numbr = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numbr);
}
