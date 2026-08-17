#include "main.h"

/**
  * _strcat - appends the src string to the dest string
  * @dest: pointer to the destination string
  * @src: pointer to the source string
  *
  * Description: This function appends the src string to the dest string,
  * overwriting the terminating null byte (\0) at the ed of dest,
  * and then adds a terminating null byte.
  * Return: pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append the source string to the destination string */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Add the terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}
