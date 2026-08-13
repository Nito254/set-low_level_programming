#include "main.h"

/**
  * puts2 - Prints very other character of a string
  * starting with the first character.
  * @str: The string to be printed.
  *
  * Return: Nothing.
  */
void puts2(char *str)
{
	int i;
	int len = 0;

	/* Find the total length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Loop throught the string, jumping 2 steps at a time */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
