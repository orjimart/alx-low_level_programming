#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *print_rev - function that Prints a reserve string
 *@s: the parameter
 *Return: none
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	putchar(*(s + len));
	putchar(10);
}
