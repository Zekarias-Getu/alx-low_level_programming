#include <stdio.h>

/**
*main-entry to c program 
*
*desc:this program will print all letter of english lang both upper and lower case 
*retuern:returns zero
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

for (letter='A'; letter <='z'; letter++)
putchar(letter);

putchar('\n');

return(0);
}
