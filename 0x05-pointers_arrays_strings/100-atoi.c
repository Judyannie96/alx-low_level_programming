#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int k, f, n, len, b, digit;

	k = 0;
	f = 0;
	n = 0;
	len = 0;
	b = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (k < len && f == 0)
	{
		if (s[k] == '-')
			++f;

		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (f % 2)
				digit = -digit;
			n = n * 10 + digit;
			b = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			b = 0;
		}
		k++;
	}
	if (b == 0)
		return (0);

	return (n);
}
