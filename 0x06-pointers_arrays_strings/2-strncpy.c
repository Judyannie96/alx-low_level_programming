#include "main.h"

/**
  * _strncpy - The main function of the code
  * @src: Function parameter
  * @dest: Function parameter
  * @n: Function parameter
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while  (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
