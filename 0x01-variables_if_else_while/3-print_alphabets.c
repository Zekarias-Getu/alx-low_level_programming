#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char l;
char m;

l = 'a';
m = 'A';
while (l <= 'z')
{
putchar(l);
l++;
}
while (m <= 'Z')
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
