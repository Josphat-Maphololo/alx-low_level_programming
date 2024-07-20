#include <stdio.h>
#include <math.h>    /* For sqrt() */
#include <stddef.h>  /* For size_t */

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
size_t jump;
size_t prev;
size_t current;
size_t idx;
if (array == NULL || size == 0)
return (-1);
jump = (size_t)sqrt(size);
prev = 0;
current = 0;
/* Jumping ahead in steps of 'jump' */
while (current < size && array[current] < value)
{
prev = current;
current += jump;
if (current >= size)
current = size - 1;  /* Ensure current does not exceed the array size */
printf("Value checked array[%lu] = [%d]\n", (unsigned long)prev, array[prev]);
}
/* Linear search in the identified block */
for (idx = prev; idx <= current; idx++)
{
printf("Value checked array[%lu] = [%d]\n", (unsigned long)idx, array[idx]);
if (array[idx] == value)
return (idx);
}
return (-1);
}
