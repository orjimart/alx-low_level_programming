#include <stdio.h>
/**
* rev_string - reverse string
* @s: is string to reverse
*/
void rev_string(char *s)
{
	int i = 0;
	int j = 0;

	for (i = 0; (s[i] != '\0' && s[i + 1]); i++)
	{
		j++;
	}

	i = 0;
	if (j > 0)

	{
		for (i = j; i >= 0; i--)
		{
			printf("%c", s[i]);
		}

		printf("\n");
	}
}
