#include "main.h"

/**
 * main - Prints _putchar, followed by a new line
 *
 * Return: ALways 0 (SUccess)
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
