#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 * followed by a new line
 * description
 * Return: (0) success
 */
int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
