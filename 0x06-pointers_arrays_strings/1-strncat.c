#include "main.h"

/**
  * _strncat - concatenates two strings using at most n bytes from src
  * @dest: pointer to the destination string
  * @src: pointer to the source string
  * @n: maximum number of bytes to use from src
  *
  * Decription: Appends the src string to the dest string, using at most
  * n byts from src. The src string does not need to be null-terminated
  * if it contains n or more bytes. The resulting string in dest is always
  * null-terminated.
  * Return: pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append at most n bytes from src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add the terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}
  
