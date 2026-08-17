#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: pointer to the first string to be compared
  * @s2: pointer to the second string to be compared
  *
  * Description: Compares two strings character by character. If the strings
  * are identical, it returns 0. If they differ, it returns the difference
  * between the ASCII values of the first unmatched characters.
  * Return: integer less than, equal to, or greater than zero if s1 is found,
  * respectively, to be less than, to match or to be greater than s2
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Loop through both strings as long as the characters match */
	while (s1[i] == s2[i])
	{
		/* If we reach the end of the strings and they still match */
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}

	/* Return the difference in ASCII values of the first differing characters */
	return (s1[i] - s2[i]);
}
