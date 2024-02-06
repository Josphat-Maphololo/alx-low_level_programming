#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @hobo: pointer to the first node in the list
 * @p: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t*add_nodeint(listint_t**hobo, const int p)
{
listint_t *newe;
newe = malloc(sizeof(listint_t));
if (!newe)
return (NULL);
newe->p = p;
newe->next = *hobo;
*hobo = newe;
return (newe);
}
