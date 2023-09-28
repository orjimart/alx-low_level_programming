#include "main.h"
/**
 * _strlen_recursion - function that print the string length
 * @s: string lenght
 * Return: length of string as an int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
