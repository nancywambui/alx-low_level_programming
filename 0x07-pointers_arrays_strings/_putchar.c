#include "main.h"
#include <unistd.h>

/**
 *_purchar - we are using it to write the character of c to stdout
 *@c: this is the character that we need to print
 *
 *Return: 1 success
 *On error, -1 returned, then error is set well.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
