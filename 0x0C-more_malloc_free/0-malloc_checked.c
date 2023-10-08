#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 *
 * Return: null or where initialized
 */
void *malloc_checked(unsigned int b)
{
	int *output = malloc(b);

	if (output == 0)
		exit(98);

	return (output);
}
