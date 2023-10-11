#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: target array
 * @size: array size
 * @cmp: function pointer to compare
 *
 * Return: int elemnt match, -1 if size <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int mart;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (mart = 0; mart < size; mart++)
	{
		if (cmp(array[mart]) != 0)
			return (mart);
	}
	return (-1);
}
