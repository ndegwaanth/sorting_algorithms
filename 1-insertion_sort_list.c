#include <stdio.h>
#include "sort.h"
/**
 * insertion_sort - sort a doubly linked list of integer in ascending using the insertion sort algorithm
 * @list: this is the list of the element
 * Return: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *the_current, *temp; 
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	
	the_current = (*list)->next;
	for (;the_current != NULL; the_current = the_current->next)
	{
		temp = the_current;
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (temp->prev == NULL)
				*list = temp;

			print_list(*list);
		}
	}
}	
