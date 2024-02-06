#include "lists.h"

/**
 * free_listint - frees a linked list
 * @heady: listint_t list to be freed
 */
void free_listint(listint_t *heady)
{
listint_t *temp;
while (heady)
{
temp = heady->next;
free(heady);
heady = temp;
}
}
