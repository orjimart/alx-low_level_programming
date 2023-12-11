#include "main.h"

/**
 * _puts - funct that prints string to std output followed by \n
 * @str: the parameter
 * Return: always 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
