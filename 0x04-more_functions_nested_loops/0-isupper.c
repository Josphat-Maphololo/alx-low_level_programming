#include <stdio.h>
/*
 * Function: _isupper
 * -------------------
 * Checks whether a character is uppercase.
 *
 * Parameters:
 * c: the character to be checked
 *
 * Returns:
 * 1 if the character is uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
/*
 * Function: main
 * ----------------
 *  Entry point of the program
 *
 *  Returns:
 *  0 on successful execution
 */
int main(void)
{
char ch = 'H';
int result = _isupper(ch);
if (result == 1)
{
printf("The character is uppercase.\n");
}
else
{
printf("The character is not uppercase.\n");
}
return (0);
}
