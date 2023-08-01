#include "main.h"
/**
 * _strspn - function
 * @s: a pointer to the input
 * @accept: its a pointer to the string of the characters
 * Return: 0 success
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return(n);
}

