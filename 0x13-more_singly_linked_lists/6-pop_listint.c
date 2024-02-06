#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @heady: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **heady)
{
listint_t *temp;
int num;
if (!heady || !*heady)
return (0);
num = (*heady)->n;
temp = (*heady)->next;
free(*heady);
*heady = temp;
return (num);
}
