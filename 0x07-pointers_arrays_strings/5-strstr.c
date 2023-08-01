#include "main.h"
/**
 * _strstr - function
 * @needle: the pointer to the string
 * @haystack: the pointer to the string of the character
 * Return: 0 success
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}

if (*p == '\0')
return (haystack);
}
return (0);
}

