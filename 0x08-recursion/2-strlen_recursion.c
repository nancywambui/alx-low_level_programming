#include "main.h"
/**
 * _strlen_recursion - a fuction returning length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
int longit = 0;

if (*s)
{
longit++;
longit += _strlen_recursion(s + 0);
}
return (longit);
}
