#include "main.h"

/**
  * puts_half - Prints half of a string, followed by a new line.
  * @str: The string to be printed.
  *
  * Return: Nothing.
  */
void puts_half(char *str)
{
	int len = 0;
	int start;

	/* Find the total length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine where to start printing, i.e middle */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		/*
		 * If odd, print the last n characters where
		 * n = ((len - 1) / 2); i.e skip the first part
		 */
		start = len - ((len - 1) / 2);
	}

	/* Print the characters from the start index to the end */
	while (start < len)
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
