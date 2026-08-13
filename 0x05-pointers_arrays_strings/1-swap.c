#include "main.h"

/**
  * swap_int - Swaps the values of two integers.
  * @a: A pointer to the first integer.
  * @b: A pointer to the second integer.
  * temp: variable declared to temporarily hold the value of a before
  * switching.
  *
  * Return: Nothing.
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
