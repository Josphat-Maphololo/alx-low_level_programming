#include "main.h"
/**
* main - A program that check whaether a character is lower or not 
* Return: 0 (Success)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
