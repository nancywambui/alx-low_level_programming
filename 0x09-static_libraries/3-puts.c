#include "main.h"
/**
 * _puts - it prints a string followed by a new lne
 * @str: its a string to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

