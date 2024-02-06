#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @heady: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **heady)
{
listint_t *temp;
if (heady == NULL)
return;
while (*heady)
{
temp = (*heady)->next;
free(*heady);
*heady = temp;
}
*heady = NULL;
}
