#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @headd: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *headd)
{
int sum = 0;
listint_t *temp = headd;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
