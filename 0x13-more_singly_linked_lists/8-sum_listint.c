#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the list.
 *
 * Return: all the data (n), 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
