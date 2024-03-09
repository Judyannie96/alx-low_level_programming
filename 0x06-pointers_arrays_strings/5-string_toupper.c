#include "main.h"
/**
 * string_toupper - main function
 * @n: String input
 * Return: dest
 */

char *string_toupper(char *n)
{
	int m = 0;

	while (n[m] != '\0')
	{
		if (n[m] >= 'a' && n[m] <= 'z')
			n[m] = n[m] - 32;
		m++;
	}
	return (n);
}
