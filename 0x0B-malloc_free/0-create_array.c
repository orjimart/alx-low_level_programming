#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the input
 * @c: char size
 * Return: nothing (0)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
