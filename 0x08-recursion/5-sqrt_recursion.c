#include "main.h"

/**
  * find_sqrt - Helper function to find the natural square oot.
  * @n: The target number.
  * @root: The current guess being tested.
  *
  * Return: Natural square root, or -1 if none exists.
  */
int find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);

	if (root * root > n)
		return (-1);

	return (find_sqrt(n, root + 1));
}

/**
  * _sqrt_recursion - Returns the natural square root of a number.
  * @n: The number to find the square root of.
  *
  * Return: Natural square root, or -1 if n < 0 or no natural root exists.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}
