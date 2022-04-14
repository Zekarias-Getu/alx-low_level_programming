#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char l;

l = 'a';
while (l <= 'z')
{

if (l == 'q' || l == 'e')
{

}
else
{
putchar(l);
}
l++;
}
putchar('\n');
return (0);
}
