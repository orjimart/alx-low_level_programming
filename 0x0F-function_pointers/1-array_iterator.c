#include "function_pointers.h"
/**
 * array_iterator - function that executes
 * @array: target array
 * @size: array size
 * @action: function pointer to array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int mart;

	if (array == NULL || action == NULL)
		return;

	for (mart = 0; mart < size; mart++)
	{
		action(*array);
		array++;
	}
}
