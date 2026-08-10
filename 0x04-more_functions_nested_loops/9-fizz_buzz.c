#include <stdio.h>

/**
  * main - prints the numbers froom 1 to 100, followed by a new line
  * For multiples of 3, print Fizz.
  * For multiples of 5, print Buzz.
  * For multiples of both 3 and 5, print FizzBuzz.
  *
  * Return: ALways 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 1; 1 <= 100; i ++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz")
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		/* Print space after each element except the last one */
		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
