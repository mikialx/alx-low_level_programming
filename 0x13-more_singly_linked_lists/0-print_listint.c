#include <stdio.h>
#include "lists.h"

/**
 *print_listint-Prints all the elements of a linked list.
 *@h:Pointer to the list to be printed.
 *Return:Total number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int n = 0;


	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
		}
	return (n);

}
