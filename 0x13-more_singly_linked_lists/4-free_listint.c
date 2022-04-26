#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * free_listint - frees a listint_t list.
 * @head: pointer to the beginning to the list.
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
