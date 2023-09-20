#include "main.h"
/**
 * string_toupper - this function converts a string to uppercase
 *
 * @str: the string input
 *
 * Return: edited string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
