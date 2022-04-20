#include "main.h"

/**
* is_numerical - check if digit or not
* @n: number
* Return: 1 if it is a number 0 otherwise
*/
int is_numerical(unsigned int n)
{
return (n >= '0' && n <= '9');
}

/**
* _atoi - convert a string to an integer
* @s: the string to be converted
*
* Return: 0 if no numbers in the string, otherwise numbers times sign
*/

int _atoi(char *s)
{
unsigned int num, i;
int sign = 1;

num = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{
num = (s[i] - 48) + num * 10;
if (s[i + 1] == ' ')
break;
}
else if (s[i + 1] == '-')
{
sign *= -1;
}
}

return (num * sign);
}
