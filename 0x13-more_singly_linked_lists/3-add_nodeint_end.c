#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @*header - pointer to the head of the list
 * @int n - integer content to be used
 *
 * Return: Address of the newly added node
 **/

listint_t *add_nodeint_end(list_t **head, const int n)
{
listint_t *ptr;
listint_t *temp = *head;

temp = malloc(sizeof(listint_t));
     if (temp != NULL)
{
	      temp->n = n;
	            temp->next = NULL;
}
else 
     return (NULL);
       if (ptr != NULL)
{
	   while (ptr->next != NULL)
 		   ptr = ptr->next;
                   ptr->next = temp;
}
  else
        *head = temp;
	      return (temp);
	      
}
