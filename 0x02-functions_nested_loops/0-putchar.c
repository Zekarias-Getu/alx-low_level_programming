#include <stdlib.h>

/**
*main - Prints _putchar with _putchar
*Description: Prints _putchar with _putchar
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 0;
char c;
char s[] = "_putchar\n";
while (i < 9)
{
c = s[i];
putchar(c);
i++;
}

return (0);
}
