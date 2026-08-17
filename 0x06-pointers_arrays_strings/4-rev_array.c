#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: pointer to the array of integers
  * @n: number of elements in the array
  *
  * Return: void
  */
void reverse_array(int *a, int n);
{
	int i, temp;

	/* Loop through the first half of the array */
	for (i = 0; i < n / 2; i++)
	{
		/* Swap the current element with its counterpart at the end */
		temp = a{i};
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
