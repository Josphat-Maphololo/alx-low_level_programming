#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main A program to select random positve or neagative numbers
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(NULL));
n = rand() % 201 - 100;
printf("%d is ", n);
if (n > 0)
{
printf("positive");
}
else if (n == 0)
{
printf("zero");
}
else
{
printf("negative");
}
printf("\n");
return (0);
}
