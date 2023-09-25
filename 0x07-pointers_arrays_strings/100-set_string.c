#include "main.h"
/**
 * set_string - set the value of a pointer to a char
 * @s: this is pointer to a pointer
 * @to: represents pointer char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
