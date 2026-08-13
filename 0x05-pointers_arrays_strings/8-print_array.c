#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints n elements of an array of integers.
  * @a: A pointer to the array of integers.
  * @n: The number of elements of the array to be printed.
  *
  * Return: Nothing.
  */
void print_array(int *a, int n)
{
	int i;

	for (i =0; i < n; i++)
	{
		printf("%d", a[i]);

		/* Print comma and space if it's not the last element */
		if (i < n -1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
