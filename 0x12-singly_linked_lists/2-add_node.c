#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *  * add_node - add a new node at the end of a list_t
 *   * @head: double pointer to the list_t list
 *    * @str: new string to add in the node
 *     * Return: the address of the new element, or NULL if fail
 *      */
list_t *add_node(list_t **head, const char *str)
{
		list_t *new;
			unsigned int len = 0;

				while (str[len])
							len++;

					new = malloc(sizeof(list_t));
						if (!new)
									return (NULL);

							new->str = strdup(str);
								new->len = len;
									new->next = (*head);
										(*head) = new;

											return (*head);
}
