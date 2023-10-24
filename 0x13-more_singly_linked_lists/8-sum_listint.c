#include "lists.h"

/**
*sum_listint -  This funct returns the sum of data (n) of listint_t linked list
*@head: first node in the linked list
*Return: The sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
