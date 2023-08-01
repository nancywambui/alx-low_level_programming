#include "main.h"

/**
 * _memcpy() - the function copies bytes from one memory area to another
 * @src: where the memory is removed
 * @dest: where the memory is taken
 * @n: these are the number of bytes
 *
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return(dest);
}

