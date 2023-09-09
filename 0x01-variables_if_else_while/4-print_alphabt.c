#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints the alphabet in lowercase
 * description
 * Return: Always (0) success
 */
int main(void)
{
	char ch, e, q;

	q = 'q';
	e = 'e';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != e && ch != q)
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

