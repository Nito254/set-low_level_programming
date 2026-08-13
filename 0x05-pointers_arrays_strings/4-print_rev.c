#include "main.h"

/**
  * print_rev - Prints a string, in reverse, followed by a new line.
  * @s: The string to be printed.
  *
  * Return: Nothing.
  */
void print_rev(char *s)
{
	int i = 0;

	/* Find the length of the string first/ end of the string. */
	while (s[i] != '\0')
	{
		i++;
	}

	/* Step backwards from the last character before the null byte,
	 * printing each.
	 */
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
