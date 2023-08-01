#include "main.h"
/**
 * _strpbrk - function
 * @s: is the pointer to the string 
 * @accept: the pointer to the string of the characters
 * Return: 0 success
 */
char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return('\0');
}
