#include "lists.h"
/**
 * free_listint - define function
 * @head: describe function
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		reurn;
	free_listint(head->next);
	free(head);
}
