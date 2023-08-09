#include <stdio.h>
#include "main.h"

/**
 * main - function that print the number of arguments
 * @argc: input value
 * @argv: array
 *
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);

return (0);
}
