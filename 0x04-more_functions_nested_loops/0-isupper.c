#include "main.h"
/**
 * _isupper - the program checks for uppercase characters
 * @c: Variable text
 * Return: always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
