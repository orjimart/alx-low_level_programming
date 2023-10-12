#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Desc: Write a function that prints numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int mart;

	va_start(nums, n);
	for (mart = 0; mart < n; mart++)
	{
		printf("%d", va_arg(nums, int));
		if ((mart != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nums);
}
