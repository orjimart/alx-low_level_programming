#include <stdio.h>
/**
* rev_string - function that reverse string
* @s: is the string
*/
void rev_string(char *s)
{
	int i = 0;
	int mart = 0;

	for (i = 0; (s[i] != '\0' && s[i + 1]); i++)
	{
		mart++;
	}

	i = 0;
	if (mart > 0)

	{
		for (i = mart; i >= 0; i--)
		{
			printf("%c", s[i]);
		}

		printf("\n");
	}
}
