#include "main.h"

/**
  * reverse_array - The main faunction
  * @a: Function parameter
  * @n: Function parameter
  * Return: Always 0
  */

void reverse_array(int *a, int n)
{
	int q, r;

	for (q = 0; q < n--; q++)
	{
		r = a[q];
		a[q] = a[n];
		a[n] = r;
	}
}
