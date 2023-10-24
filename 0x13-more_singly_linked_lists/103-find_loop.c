#include "lists.h"
/**
 * find_listint_loop - finds the loop contained in a linked list
 * @head : pointer to the head of the linked list
 * Return: pointer the node where the loop starts or NULL - if there is no loop
 * */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1, *node2;
	while (node1 != NULL && node2 != NULL && node2->next != NULL)
	{
		node1 = node1->next;
		node2 = node2->next->next;
	  if (node1 == node2)
	  {
		  return (node1);
	  }
	}
	return (NULL);
}
