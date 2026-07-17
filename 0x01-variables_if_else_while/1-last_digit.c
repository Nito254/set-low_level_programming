#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The main entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lst_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lst_dig = n % 10;
	if (lst_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dig);
	}
	else if (lst_dig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst_dig);
	}
	else if (lst_dig < 6 && lst_dig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dig);
	}

	return (0);
}
