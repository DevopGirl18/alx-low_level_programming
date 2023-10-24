#include "lists.h"
/**
 * add_node_end - adds a node at the end of the linked list
 * @header - pointer to the head of the list
 * @n - integer content to be used
 * Return: Address of the newly added node
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;
	ptr = head;
	temp = (listint_t) malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	 ptr->next = temp;
}
