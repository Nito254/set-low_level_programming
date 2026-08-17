#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: pointer to the destination buffer
  * @src: pointer to the source string
  * @n: maximum number of bytes to copy
  *
  * Description: Copies up to n bytes from the string pointed to by src
  * to the buffer pointed to by dest. If the length of src is less than n,
  * the remainder of dest will be padded with null bytes.
  * Return: pointer to the resulting string dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy up to n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Pad the remainder with null bytes if src is shorter than n */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
