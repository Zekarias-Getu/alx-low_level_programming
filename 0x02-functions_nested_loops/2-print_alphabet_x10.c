#include "main.h"

/**
*print_alphabet_x10 - check the code.
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
int j = 0;
int i;
while (j < 10)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
j++;
}
}
