#include "main.h"

/**
 * print_alphabet_10x - Prints the alphabet in lowercase 10 times
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
char letter;
for (i = 0; i < 10; i++)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
