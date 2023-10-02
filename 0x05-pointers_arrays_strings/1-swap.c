/**
 * swap_int -funct that swaps the values of two integers
 * @a: first pointer
 * @b: 2nd pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int d = *a;
	*a = *b;
	*b = d;
}
