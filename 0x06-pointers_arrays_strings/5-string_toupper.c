#include "main.h"

/**
  * string_toupper - changes all lowercase lettes of a string to uppercase
  * @str: pointer to the string to be modified
  *
  * Return: pointer to the modified string
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* Check if the character is lowercase */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert to uppercase by subtracting 32 in ASCII */
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
