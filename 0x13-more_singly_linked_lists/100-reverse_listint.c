#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @heady: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **heady)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*heady)
{
next = (*heady)->next;
(*heady)->next = prev;
prev = *heady;
*heady = next;
}
*heady = prev;
return (*heady);
}
