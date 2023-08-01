#include "main.h"
/**
 * _memset - fills the first bytes of the memory area
 * @s: pointer to the memory area where the constant byte is written
 * @b: its the constant byte to be written
 * @n: the number of bytes to be filled
 *
 * Return: it returns a pointer to the memory  area
 */
char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
s[i] = b;
}
return(s);
}

