#include "main.h"

/**
  * rev_string - Reverses a string.
  * @s: The string to be reversed.
  *
  * Return: Nothing.
  */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	len--; /* Adjust to the index of the last printable character */

	/* Swap characters from the outside in */
	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
		len--;
	}
}
