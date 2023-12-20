#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * main - A program that print_alphabet_x10 the alphabet in lowercase 10 times
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
