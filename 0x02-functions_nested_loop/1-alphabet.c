#include <stdio.h>
void print_alphabet(void);
/**
 * main - A programt to print alphjabetic letters
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
