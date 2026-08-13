#include "main.h"

/**
  * _strcpy - Copies the string pointed to by src, including the
  * terminating null byte (\0), to the buffer pointed to by dest.
  * @dest: A pointer to the destination buffer where the string is copied.
  * @src: A pointer to the source string to be copied.
  *
  * Return: The pointer to dest.
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy characters until the null byte is reached */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Copy the terminating null byte */
	dest[i] = '\0';

	return (dest);
}

