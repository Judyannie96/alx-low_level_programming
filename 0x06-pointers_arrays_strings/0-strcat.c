#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
	int y, r;

	y = 0;
	r = 0;

	while (dest[y] != '\0')

	{
		y++;
	}

	while (src[r] != '\0')
	{
		dest[y] = src[r];
		y++;
		r++;
	}
	dest[y] = '\0';
	return (dest);
}
