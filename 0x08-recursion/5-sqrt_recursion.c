#include "main.h"
/**
 * sqrt_a - function that returns the natural square root of 
 * a number.
 * @x: input number
 * @y: iterator
 * Return: square root or -1
 */
int sqrt_a(int x, intyb)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrt_a(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of
 * a number
 * @n: the input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
