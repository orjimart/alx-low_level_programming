#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: input
 * Return: returns to the string else null
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
