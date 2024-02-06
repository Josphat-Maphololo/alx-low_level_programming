#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @heady: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *heady, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = heady;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
