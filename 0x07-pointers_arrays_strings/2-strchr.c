#include "main.h"
/**
 * _strchr - function used
 * @c: Its the character we want to find
 * @s: A pointer to the string
 * Return: 0 success
 */
char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return(0);
}

