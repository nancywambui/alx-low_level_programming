#include "main.h"
/**
 * -puts_recursion.c - Recursive function
 *  @s: the function input 
 *  @Return: 0 success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

