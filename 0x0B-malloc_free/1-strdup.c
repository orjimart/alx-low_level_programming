#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
int a = 0, size = 0;
char *n;

if (str == NULL)
	return (NULL);

for (; str[size] != '\0'; size++)
;

/*+1 on the size puts the end of string character*/
n = malloc(size * sizeof(*str) + 1);

if (n == 0)
	return (NULL);
else
{
	for (; a < size; a++)
		n[a] = str[a];
}
return (n);
}
