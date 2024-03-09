#include "main.h"
#include <stdio.h>

/**
 * rot13 - main function
 * @s: String pointer
 * Return: String function
 */

char *rot13(char *s)
{
	int p, r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (r = 0; r < 52; r++)
		{
			if (s[p] == data1[r])
			{
				s[p] = datarot[r];
					break;
			}
		}
	}
	return (s);
}
