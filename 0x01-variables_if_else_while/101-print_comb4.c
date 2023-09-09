#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m, a;

	for (n = 48; n <= 56; n++)
	{
	for (m = 49; m <= 57; m++)
	{
	for (a = 50; a < 58; a++)
	{
	if (a > m && m > n)
	{
	putchar(n);
	putchar(m);
	putchar(a);
	if (n != 56 || m != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
