#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - funct that returns the sum of all its parameters
 * @n: The number of paramters passed to d funct.
 *
 * Desc: Write a function that returns the sum of all its parameters.
 * Return: 0 if n==0 else sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int mart, sum = 0;

	va_start(nums, n);
	for (mart = 0; mart < n; mart++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
