#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*insert_nodeint_at_index -  inserts a new node at a given position.
*@head: double pointer to the list
*@n: integer to add to the list
*@idx: index of the list, index start at 0
*Return:  the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	current = *head;
	i = 0;
	if (current == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
{
	new->next = *head;
	*head = new;
	return (new);
}
while (i != idx - 1)
{
	current = current->next;
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	i++;
}
new->next = current->next;
current->next = new;
return (new);
}
