#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: the number of command line arguments
  * @argv: an array containing the program command line arguments
  *
  * Return: 0 if successful, 1 if Error
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
