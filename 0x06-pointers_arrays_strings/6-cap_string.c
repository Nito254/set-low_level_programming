#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @str: pointer to the string to be modified
  *
  * Return: pointer to the modified string
  */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		/* If we find a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Always capitalize if it's the very first character */
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				/* Check if the previous character is a separator */
				for (j = 0; sep[j] != '\0'; j++)
				{
					if (str[i - 1] == sep[j])
					{
						str[i] = str[i] - 32;
						break; /* Stop checking once a separator is found */
					}

				}
			}
		}
		i++
	}
	return (str);
}
